#include "sorting.h"
void insertion_sort(int *arr,size_t sz){
    if(sz<2) return;
    for(size_t i = 1;i<sz;i++){
        
        int j = i-1;
        int tmp = arr[i];
        while( j>=0  && arr[j]>tmp ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
    }
}

void heap_sort(int *arr,size_t sz){
    if(sz<2) return;
    build_heap(arr,sz);
    for(int i = sz-1;i>=1;--i){
        int tmp = arr[i];
        arr[i] = arr[0];
        arr[0] = tmp;
        heapify(arr,0,i);
    }

    
}

void build_heap(int *arr,int mx){
    for (int i = (mx/2) - 1; i >=0 ; --i){
        heapify(arr,i,mx);
    }
    
}
void heapify(int *arr,int idx,int mx){
    int left = 2*idx +1;
    int right = 2*idx +2;
    int largest = idx;
    if(left < mx  && arr[left] > arr[idx] )
        largest = left;
    if(right < mx  && arr[right] > arr[largest] )
        largest = right;
    if (largest != idx){
        int tmp = arr[idx];
        arr[idx] = arr[largest];
        arr[largest] =  tmp;
        heapify(arr,largest,mx);
    }
}


void make_heap(int *arr,int sz){
    for(size_t i = 0;i<sz;i++){
        int index = i;
        while(index!=0){
            int parent = (index-1)/2;
            if (arr[index] <= arr[parent])
                break;
            int tmp = arr[parent];
            arr[parent] = arr[index];
            arr[index] = tmp;
            index = parent; 
        }
    }
}

void print(int *arr,size_t sz){
    for(size_t i = 0;i<sz;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
