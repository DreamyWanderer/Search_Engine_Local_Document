#include "lib.h"
#include "SLL.h"
#include "TextNormalizationOperators.h"
#include "PreprocessFIle.h"
#include "QuickSort.h"
using namespace std;

const float eps = 0.01;

extern SLL curList;



void addFile(const wstring path) {
    FILE* curFile = _wfopen(path.c_str(), L"r,ccs=UTF-8");
    string p = string(path.begin(), path.end());
    FILE* index = fopen("Crawl\\index.txt", "a");
    fprintf(index, "%s\n", p.c_str()); fclose(index);
    wstring s = L"";
    while (true) {
        if (feof(curFile)) {
            break;
        }
        s += fgetwc(curFile);
    }
    s.erase(s.size() - 1, 1);
    removeStopwords(s); unsignedDocument(s);
    string t = string(s.begin(), s.end());
    int total = countInitialWords(t);
    string* tmp = new string[total];
    string* words = new string[total * 2];
    wstring x = L""; s += L' ';
    int cur = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == L' ' || s[i] == L'\n') {
            standardized(x);
            if (x.length() != 0 && x.length() < 50) {
                tmp[cur++] = string(x.begin(), x.end());
            }
            x = L"";
        }
        else x += s[i];
    }
    int numWords = 0;
    for (int i = 0; i < cur; i++) {
        words[numWords++] = tmp[i];
        if (i + 1 < cur) {
            words[numWords++] = tmp[i] + " " + tmp[i + 1];
        }
    }
    quickSort(words, 0, numWords - 1);
    int distincs = countNeedWords(words, numWords, total);
    int cnt = 1;
    string metaPath = "Crawl\\metadata\\" + magicString(p);
    FILE* meta = fopen(metaPath.c_str(), "w");
    fprintf(meta, "%d\n", distincs);
    for (int i = 1; i < numWords; i++) {
        if (words[i] == words[i - 1]) cnt++;
        else {
            float weight = 1.00 * cnt * countInitialWords(words[i - 1]) / total;
            if (weight >= eps) {
                fprintf(meta, "%.5f %s\n", weight, words[i - 1].c_str());
            }
            cnt = 1;
        }
    }
    float weight = 1.00 * cnt * countInitialWords(words[numWords - 1]) / total;
    if (weight >= eps) {
        fprintf(meta, "%.5f %s\n", weight, words[numWords - 1].c_str());
    }
    delete[] tmp, words;
    fclose(meta); fclose(curFile);
    addData(p, curList);
}

void removeFile(const string path) {
    string p = "Crawl\\metadata\\" + magicString(path);
    if (removePath(path, curList)) {

        FILE* index = fopen("Crawl\\index.txt", "w");
        
        Node* cur = curList.head;
        while (cur != NULL) {
            fprintf(index, "%s\n", cur->path.c_str());
            cur = cur->nxt;
        }
        fclose(index);
        int status = remove(p.c_str());
        if (status == 0) {
            cerr << "Remove successfully !!!\n";
        }
    }
}


int binSearch(pack* a, int lo, int hi, string &key){
    int pos = -1;
    while (lo <= hi){
        int mi = (lo + hi) / 2;
        if (a[mi].word <= key){
            pos = mi;
            lo = mi + 1;
        }
        else hi = mi - 1;
    }
    if (pos == -1) return pos;
    if (a[pos].word != key) return -1;
    else return pos;
}

void searchData(SLL &curList, wstring s){
    unsignedDocument(s);
    string t = string(s.begin(), s.end());
    int numWords = countInitialWords(t);
    string* words = new string[numWords]; 
    int cntWords = 0;
    wstring curWord = L""; s += L' ';
    for (int i = 0; i < s.length(); i++){
        if (s[i] == L' ' || s[i] == L'\n'){
            standardized(curWord);
            if (curWord.length() != 0 && curWord.length() <= 50){
                words[cntWords++] = string(curWord.begin(), curWord.end());
            }
            curWord = L"";
        }
        else curWord += s[i];
    }
 

    FILE* ans = fopen("out.txt", "w");
    Node* cur = curList.head;
    while (cur != NULL){
        float totalWeight = 0.00;
        for (int i = 0; i < cntWords; i++){
            string key = words[i];
            int id = binSearch(cur->listWord, 0, cur->nWords - 1, key);
            if (id != -1){
                totalWeight += cur->listWord[id].weight;
            }
        }
        for (int i = 0; i + 1 < cntWords; i++) {
            string key = words[i] + " " + words[i + 1];
            int id = binSearch(cur->listWord, 0, cur->nWords - 1, key);
            if (id != -1) {
                totalWeight += cur->listWord[id].weight * 10;
            }
        }
        if (totalWeight != 0.0) fprintf(ans, "%s*%f\n", cur->path.c_str(), totalWeight);
        cur = cur->nxt;
    }
    fclose(ans);

}


void loadFileMeta(SLL &cur){
    FILE* fileIndex = fopen("Crawl\\index.txt", "r");
    if (fileIndex == nullptr) return;
    char buffer[1000];
    int cnt = 0;
    while (fgets(buffer, 1000, fileIndex)){
        string path(buffer);
        if (path[path.size() - 1] == '\n')
        {
            path.erase(path.size() - 1, 1);
        }
        cnt++;
        if (path.length() <= 4) continue; // ".txt" 
        addData(path, curList);
    }
    fclose(fileIndex);
}

/*int main()
{
    _setmode(_fileno(stdout), _O_WTEXT);
    InitList(curList);
    loadFileMeta(curList);
    prepare();
    wcout << L"Done !!!";
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;    
}*/