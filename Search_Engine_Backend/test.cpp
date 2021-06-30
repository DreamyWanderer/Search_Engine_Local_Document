#include <fcntl.h> 
#include <io.h>    
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <iterator> // Su dung tam thoi --> sau do thay bang hash
#include <map> // Su dung tam thoi --> sau do thay bang hash
using namespace std;

map<wstring, int> cnt;
map<wstring, bool> isStopword;

void removeStopWord(const wchar_t* name){
    HANDLE cur;
    WIN32_FIND_DATAW wfd;
    wchar_t meta[50], index[50];
    wcscpy(meta, name); wcscat(meta, L"\\metadata.dat");
    wcscpy(index, name); wcscat(index, L"\\index.text");
    FILE* fileMeta = _wfopen(meta, L"a");
    FILE* fileIndex = _wfopen(index, L"w");

    wstring newName(name);
    newName += L"\\*.txt";
    wprintf(L"%s\n", index);
    if ((cur = FindFirstFileW(newName.c_str(), &wfd)) != INVALID_HANDLE_VALUE){
        do{
            fwprintf(fileIndex, L"%s\n", wfd.cFileName);
            wstring curNamePath(name);
            curNamePath += L"\\";
            curNamePath += wfd.cFileName;
            FILE* curPath = _wfopen(curNamePath.c_str(), L"r");
            wprintf(L"%s\n", curNamePath.c_str());
            wchar_t buffer[40];
            /*
            while (fwscanf(curPath, L"%s", buffer)){
                int n = wcslen(buffer);
                if (buffer[n - 1] == L'\n'){
                    buffer[n - 1] = L'\0';
                }
                wstring s(buffer);
                if (isStopword[s]) continue;
                else {
                    cnt[s]++;
                }
            }
            */
            fwprintf(fileMeta, L"%s\n", curNamePath.c_str());
        } while (FindNextFileW(cur, &wfd));
        FindClose(cur);
    }

}

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

int main(int argc, char* argv[])
{
    //_setmode(_fileno(stdout), _O_U16TEXT); 
    //_setmode(_fileno(stdin), _O_U16TEXT);
    prepare();
    removeStopWord(L"train\\new train\\Am nhac");
}