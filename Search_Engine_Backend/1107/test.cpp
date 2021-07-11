#include "lib.h"
#include "textNormalizationOperators.h"
#include "preprocessFile.h"
#include "QuickSort.h"
using namespace std;

wstring discards[1942];
int nStopwords = 1942;
int convert[1 << 16];
wstring tokens = L"`~!@#$%^&*()–-_=+[]{}\\|;:'\",<.>/?“”•";
const float eps = 0.005;



wstring magicString(wstring cur){
    wstring ans = cur;
    for (int i = 0; i < cur.length(); i++){
        if (ans[i] == L'\\'){
            ans[i] = L'_';
        }
        if (ans[i] == L' '){
            ans[i] = L'@';
        }
    }
    return ans;
}


void crawlData(const wstring path){
    wstring meta = L"Crawl\\metadata\\";
    wstring index = L"Crawl\\index.txt";
    FILE* fileIndex = _wfopen(index.c_str(), L"a");
    fwprintf(fileIndex, L"%s\n", path.c_str());
    fclose(fileIndex);
    wstring cur = meta + magicString(path);
    FILE* fileMeta = _wfopen(cur.c_str(), L"w,ccs=UTF-8");
    FILE* curPath = _wfopen(path.c_str(), L"r,ccs=UTF-8");
    wstring s = L"";
    while (true){
        if (feof(curPath)){
            break;
        }
        s += fgetwc(curPath);
    }
    s.erase(s.size() - 1, 1);
    removeStopwords(s); unsignedDocument(s);
    int numWords = countInitialWords(s);
    wstring* words = new wstring[numWords]; 
    int cntWords = 0;
    wstring curWord = L"";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == L' ' || s[i] == L'\n'){
            standardized(curWord);
            if (curWord.length() != 0 && curWord.length() <= 50){
                words[cntWords++] = curWord;
            }
            curWord = L"";
        }
        else curWord += s[i];
    }
    standardized(curWord);
    if (curWord.length() != 0 && curWord.length() <= 50) words[cntWords++] = curWord;
    //wcout << cntWords << '\n';
    quickSort(words, 0, cntWords - 1);
    fwprintf(fileMeta, L"%d\n", countWords(words, cntWords));
    curWord = words[0];
    int curNum = 1;
    for (int i = 1; i < cntWords; i++){
        if (words[i] != words[i - 1]){
            float weight = 1.00 * curNum / cntWords;
            if (weight >= eps && curWord.length() != 0){
                fwprintf(fileMeta, L"%s %f\n", curWord.c_str(), weight);
            }
            curWord = words[i];
            curNum = 1;
        }
        else curNum++;
    }
    float weight = 1.00 * curNum / cntWords;
    if (weight >= eps && curWord.size() != 0){
        fwprintf(fileMeta, L"%s %f\n", curWord.c_str(), weight);
    }
    delete[] words;
    fclose(fileMeta); fclose(curPath);
}


void getFileName(const wstring path){
    wcout << path.c_str() << '\n';
    HANDLE cur;
    WIN32_FIND_DATAW wfd;
    wstring subDirectory = path + L"*";
    if ((cur = FindFirstFileW(subDirectory.c_str(), &wfd)) != INVALID_HANDLE_VALUE){
        do{
            if (!wcscmp(wfd.cFileName, L"..") || !wcscmp(wfd.cFileName, L".")) continue;
            if (checkExtension(wstring(wfd.cFileName), L".txt")){
                crawlData(path + wstring(wfd.cFileName));
            }
            else {
                getFileName(path + wstring(wfd.cFileName) + L"\\");
            }
        } while (FindNextFileW(cur, &wfd));
        FindClose(cur);
    }
}

int main(int argc, char* argv[])
{
    _setmode(_fileno(stdout), _O_WTEXT); //needed for output
    prepare();
    getFileName(L"train\\new train\\");
}