#include <fcntl.h> 
#include <io.h>    
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
using namespace std;


void removeStopWord(const wchar_t* name){
    HANDLE cur;
    WIN32_FIND_DATAW wfd;
    wchar_t meta[50], index[50];
    wcscpy(meta, name); wcscat(meta, L"\\metadata.dat");
    wcscpy(index, name); wcscat(index, L"\\index.text");
    FILE* fileMeta = _wfopen(meta, L"w,ccs=UTF-8");
    FILE* fileIndex = _wfopen(index, L"w");

    wstring newName(name);
    newName += L"\\*.txt";
    wprintf(L"%s\n", index);
    if ((cur = FindFirstFileW(newName.c_str(), &wfd)) != INVALID_HANDLE_VALUE){
        int cnt = 0;
        do{
            fwprintf(fileIndex, L"%s\n", wfd.cFileName);
            wstring curNamePath(name);
            curNamePath += L"\\";
            curNamePath += wfd.cFileName;
            FILE* curPath = _wfopen(curNamePath.c_str(), L"r,ccs=UTF-8");
            wstring s = L"";
            wchar_t buffer[40];
            vector<wstring> memo;
            while (fwscanf(curPath, L"%s", buffer)){  
                wstring s(buffer);
                memo.push_back(s);
            }
            sort(memo.begin(), memo.end());
            wstring word = memo[0];
            cnt = 1;
            fwprintf(fileMeta, L"%s\n", curNamePath.c_str());
            for (int i = 1; i < memo.size(); i++){
                if (memo[i] == memo[i - 1]){
                    cnt++;
                }
                else{
                    fwprintf(fileMeta, L"%s %d\n", word.c_str(), cnt);
                    cnt = 1;
                    word = memo[i];
                }
            }
            fwprintf(fileMeta, L"%s %d\n", word.c_str(), cnt);
            /*
            while (true){
                if (feof(curPath)){
                    break;
                }
                s += fgetwc(curPath);
            }
            s.erase(s.size() - 1, 1);
            fwprintf(fileMeta, L"%s\n", s.c_str());
            */
            fclose(curPath);
        } while (FindNextFileW(cur, &wfd));
        FindClose(cur);
    }

}

/*
void prepare(){
    FILE* f = _wfopen(L"stopwords.txt", L"r");
    wchar_t buffer[40];
    while (fgetws(buffer, 40, f)){
        int n = wcslen(buffer);
        buffer[n - 1] = L'\0';
        wstring s(buffer);
        isStopword[buffer] = true;
    }
}
*/

int main(int argc, char* argv[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    //prepare();
    removeStopWord(L"train\\new train\\Am nhac");
}