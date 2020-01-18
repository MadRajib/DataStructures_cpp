#ifndef sorting_h
#define sorting_h
#include <iostream>

void insertion_sort(int *arr,size_t sz);
void heap_sort(int *arr,size_t sz);
void print(int *arr,size_t sz);
void build_heap(int *arr,int mx);
void heapify(int *arr,int idx,int mx);
void make_heap(int *arr,int sz);
#endif