#include "lib.h"
using namespace std;

#ifndef _SLL_H_
#define _SLL_H_

struct Node {
    wstring path;
    int nWords;
    pack* listWord;  
    Node* nxt;
};

struct SLL {
    Node* head;
}; 

wstring magicString(wstring cur);
Node* createNode(const wstring path);
void InitList(SLL &curList);
bool isEmpty(SLL &curList);
void addData(const wstring path, SLL &curList);
void eraseNode(Node* &cur);
bool removePath(const wstring path, SLL &curList);
void printList(SLL &curList);

#endif