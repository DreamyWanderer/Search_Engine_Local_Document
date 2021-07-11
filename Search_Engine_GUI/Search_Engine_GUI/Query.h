#ifndef Query_h
#define Query_h

#include "SLL.h"

void loadFileMeta(SLL& cur);
void searchData(SLL& curList, wstring s);
int binSearch(pack* a, int lo, int hi, wstring& key);
void removeFile(const wstring path);
void addFIle(const wstring path);

#endif