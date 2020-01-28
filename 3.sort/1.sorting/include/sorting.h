#ifndef sorting_h
#define sorting_h
#include <iostream>

void insertion_sort(int *arr,size_t sz);
void heap_sort(int *arr,size_t sz);
void print(int *arr,size_t sz);
void build_heap(int *arr,int mx);
void heapify(int *arr,int idx,int mx);
void make_heap(int *arr,int sz);

void HeapSort(int *arr,int sz);
void quick_sort(int *arr,int sz);
void selectPivot_i(int *arr,int left,int right);
void partition(int *arr,int left,int right,int pivot_i);
#endif