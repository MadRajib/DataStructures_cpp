#include "arrays.h"

int * insertAt(int **arr,size_t &size,int val,size_t pos){

    size++;
    int* newArr = new int[size];
    std::cout<<size<<std::endl;
    std::copy((*arr), (*arr) + size, newArr);
   
   
    // delete[] (*arr);
    (*arr) = newArr;
   

    for (size_t i = size -1; i > pos; --i){
        (*arr)[i] = (*arr)[i-1];
    }
    (*arr)[pos] = val;
}

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

int NZBA_value(int r, int c, int L_bs[],int (&arr)[3][4]){
    auto row = r - L_bs[0];
    auto col = c - L_bs[1];
    return arr[row][col];
}

int arraySize(int l_bounds[],int u_bounds[],size_t sz){
    int total_sz = 1;
    for (size_t i = 0; i < sz; i++){
        total_sz *= (u_bounds[i]-l_bounds[i]);
    }
    
    return total_sz;
    
}

