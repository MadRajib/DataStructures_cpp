#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include "arrays.h"
#include "multiD.h"
#include "triangularArray.h"
#include "sparseArray.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

template < size_t n> 
size_t get_size(int (&arr)[n]){
    return n;
}

int main(int argc, char const *argv[]){

    /* for arrays
    int *arr = new int[5]{1,2,3,4,5};
    size_t size = 5;
    insertAt(&arr,size,2,4);

    for (size_t i = 0; i < size; i++){
        std::cout<< arr[i]<<" ";
    }
    cout<<endl;

    int arr2[][4]= {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};

    int l_bds[] = {2,4};
    
    int res = NZBA_value(2,5,l_bds,arr2);
    cout<< res <<endl;

    // Get total size for 1d array

    int lw_bds[]{10,2000,400};
    int up_bds[]{20,2010,500};

    int ar_size = arraySize(lw_bds,up_bds,get_size(lw_bds));
    cout<< ar_size <<endl;

    */


    /* For multiD */
    /*
    int bounds[]{10,20,2000,2010};
    MyArray arry = MyArray();
    auto sz = get_size(bounds);
    arry.initArray(bounds,sz);
    
    int indices[]{20,2010};
    cout<< arry.MapIndicesToIndex(indices,get_size(indices)) <<endl;
    */

   /* Triangular array */
   /* cout<<findIndex(2,3)<<endl;
   */

   /* Sparse Array */
   SparseArray sArray = SparseArray();
   
   sArray.print();
   
   sArray.setValue(1,0,1);
   sArray.setValue(1,1,2);
   sArray.setValue(5,0,3);
   sArray.setValue(100,100,19);
   sArray.setValue(70,100,29);
   sArray.setValue(70,100,39);
   sArray.print();
   cout<< sArray.getValue(1,0) <<endl;
   cout<< sArray.getValue(100,100) <<endl;
   cout<< sArray.getValue(0,10) <<endl;
   return 0;
}
