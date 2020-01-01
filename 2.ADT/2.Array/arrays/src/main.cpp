#include <iostream>
#include <string>
#include <vector>
#include "arrays.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    int *arr = new int[5]{1,2,3,4,5};
    
    size_t size = 5;
    size++;
    int* newArr = new int[size];
    std::cout<<size<<std::endl;
    std::copy(arr, arr + size, newArr);
   
   
    delete[] arr;
    arr = newArr;
   

    for (size_t i = size -1; i > 4; --i){
        arr[i] = arr[i-1]; 
    }
    arr[4] = 2;
    for (size_t i = 0; i < size; i++){
        std::cout<< arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
