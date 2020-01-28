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



// void heap_sort(int *arr,size_t sz){
//     if(sz<2) return;
//     build_heap(arr,sz);
//     for(int i = sz-1;i>=1;--i){
//         int tmp = arr[i];
//         arr[i] = arr[0];
//         arr[0] = tmp;
//         heapify(arr,0,i);
//     }
// }
// void build_heap(int *arr,int mx){
//     for (int i = (mx/2) - 1; i >=0 ; --i){
//         heapify(arr,i,mx);
//     }
    
// }
// void heapify(int *arr,int idx,int mx){
//     int left = 2*idx +1;
//     int right = 2*idx +2;
//     int largest = idx;
//     if(left < mx  && arr[left] > arr[idx] )
//         largest = left;
//     if(right < mx  && arr[right] > arr[largest] )
//         largest = right;
//     if (largest != idx){
//         int tmp = arr[idx];
//         arr[idx] = arr[largest];
//         arr[largest] =  tmp;
//         heapify(arr,largest,mx);
//     }
// }
void heap_sort(int *arr,int sz){
    build_heap(arr,sz);
    for(int i=sz-1;i>=1;i--){
        int tmp = arr[i];
        arr[i] = arr[0];
        arr[0] = tmp;
        heapify(arr,0,i);
    }
}
void build_heap(int *arr,int mx){
    for(int i =(mx/2) -1;i>=0;--i){
        heapify(arr,i,mx);
    }
}
void heapify(int *arr,int idx,int mx){
    int left = 2*idx+1;
    int right = 2*idx +2;
    int largest = idx;
    if(left < mx && arr[left]>arr[idx]) largest = left;
    if(right < mx && arr[right]>arr[largest]) largest = right;
    if(largest!=idx){
        int tmp = arr[largest];
        arr[largest] = arr[idx];
        arr[idx] = tmp;
        heapify(arr,largest,mx);
    }
}


// build heap O(nlogn)
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
// Non Recursive Heap sort
void HeapSort(int *arr,int sz){
    make_heap(arr,sz);
    for(int i=sz-1;i>=1;i--){
        int tmp = arr[0];
        arr[0] = arr[i];
        arr[i] = tmp;
        int index = 0;
        while(true){
            int child1 = 2 * index*2 +1;
            int child2 = 2 * index + 2;
            if(child1 >= i -1) child1 = index;
            if(child2 >= i -1) child2 = index;

            if(arr[index]>= arr[child1] && arr[index]>= arr[child2])
                break;
            int swapChild = child2;
            if(arr[child1]>arr[child2])
                swapChild = child1;
            int tmp = arr[index];
            arr[index] = arr[swapChild];
            arr[swapChild] = tmp;
            index = swapChild;
        }
    }
}


void quick_sort(int *arr,int sz);
void selectPivot_i(int *arr,int left,int right);
void partition(int *arr,int left,int right,int pivot_i);




void print(int *arr,size_t sz){
    for(size_t i = 0;i<sz;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
