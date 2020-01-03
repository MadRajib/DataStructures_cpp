#include "multiD.h"
void MyArray::initArray(int bounds[],size_t sz){
    this->_dims = sz/2;
    this->l_bds = new int[this->_dims];
    this->sliceSize = new int[this->_dims];
    int slice_size = 1;
    
    for (int i = this->_dims -1; i >= 0; --i){
        this->sliceSize[i] = slice_size;
        this->l_bds[i] = bounds[2*i];
        int u_bd = bounds[2*i+1];
        int bound_size = u_bd - this->l_bds[i];
        slice_size *=bound_size;
    }
    
}

int MyArray::MapIndicesToIndex(int indices[],size_t n){
    int index = 0;
    for (size_t i = 0; i < n; i++){
        index =  index + (indices[i]- this->l_bds[i])*this->sliceSize[i];
    }
    
    return index;
}