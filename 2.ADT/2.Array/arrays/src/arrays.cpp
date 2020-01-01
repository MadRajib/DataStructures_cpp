#include "arrays.h"

void insertAt(int *arr,size_t &size,int val,size_t pos){

    size++;
    int* newArr = new int[size];
    std::cout<<size<<std::endl;
    std::copy(arr, arr + size, newArr);
   
   
    delete[] arr;
    arr = newArr;
   

    for (size_t i = size -1; i > pos; --i){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
   
}