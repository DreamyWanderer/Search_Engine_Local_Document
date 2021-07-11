#include "SLL.h"
#include "lib.h"
using namespace std;

#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_

template<class T> void swap(T &a, T& b);
template<class T> int myPartition(T* arr, int lo, int hi);
void quickSort(wstring* arr, int lo, int hi);


#endif