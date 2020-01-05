#ifndef arrays_h
#define arrays_h
#include <cstddef>
#include <algorithm>
#include <iostream>


int * insertAt(int **,size_t &size,int val,std::size_t pos);
void insertAt(int *arr,size_t &size,int val,size_t pos);
int NZBA_value(int r, int c, int L_bs[],int (&arr)[3][4]);

int arraySize(int [],int [],size_t);
#endif