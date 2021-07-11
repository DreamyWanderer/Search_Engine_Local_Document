#include "lib.h"
#include "SLL.h"

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

Node* createNode(const wstring path){
    Node* cur = new Node;
    wstring pathMeta = L"Crawl\\metadata\\" + magicString(path);
    FILE* fileMeta = _wfopen(pathMeta.c_str(), L"r,ccs=UTF-8");
    cur->path = path;
    fwscanf(fileMeta, L"%d", &cur->nWords);
    cur->listWord = new pack[cur->nWords];
    for (int i = 0; i < cur->nWords; i++){
        wchar_t buffer[51]; float w;
        fwscanf(fileMeta, L"%s%f", buffer, &w);
        cur->listWord[i] = pack(wstring(buffer), w);
    }
    fclose(fileMeta);
    cur->nxt = NULL;
    return cur;
}

void InitList(SLL &curList){
    curList.head = NULL;
}

bool isEmpty(SLL &curList){
    return (curList.head == NULL);
}


void addData(const wstring path, SLL &curList){
    Node* add = createNode(path);
    if (isEmpty(curList)) curList.head = add;
    else{
        add->nxt = curList.head;
        curList.head = add;
    } 
}

void eraseNode(Node* &cur){
    delete[] cur->listWord;
    delete[] cur; cur = NULL;
}

bool removePath(const wstring path, SLL& curList){
    Node* cur = curList.head;
    Node* prev = NULL;
    while (cur != NULL){
        if (cur->path == path){
            if (prev == NULL){
                curList.head = cur->nxt;
                eraseNode(cur);
            }
            else if (cur->nxt == NULL){
                prev->nxt = NULL;
                eraseNode(cur);
            }
            else {
                prev->nxt = cur->nxt;
                eraseNode(cur);
            }
            return true;
        }
    }
}

void printList(SLL &curList){
    Node* cur = curList.head;
    wcout << 1234 << '\n';
    while (cur != NULL){
        wcout << cur->nWords << L'\n';
        for (int i = 0; i < cur->nWords; i++){
            wcout << cur->listWord[i].word << L' ' << cur->listWord[i].weight << L'\n';
        }
        cur = cur->nxt;
    }
}