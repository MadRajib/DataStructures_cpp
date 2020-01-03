#include "sparseArray.h"
SparseArray::SparseArray(){
    Array_row *sentinel =  new Array_row();
    this->top = sentinel;
}

void SparseArray::print(){
    Array_row *r_iter = this->top;
    while(r_iter->next_row!=nullptr){
        Array_entry *c_iter = r_iter->next_row->sentinel;
        while(c_iter->next_entry!=nullptr){
            std::cout<<c_iter->next_entry->value<<" ";
            c_iter = c_iter->next_entry;
        }
        std::cout<<std::endl;
        r_iter = r_iter->next_row;
    }
    std::cout<<std::endl;
}

void SparseArray::setValue(int r,int c,int v){
    /*
    * if(v == default){
    *   deleteEntry(r,c);
    *   return
    * }
    */
    Array_row *array_row = FindRowBefore(r);
    if(array_row->next_row == nullptr || array_row->next_row->rowNum > r ){
            
            Array_row *new_row =  new Array_row();
            new_row->rowNum = r;
            new_row->next_row = array_row->next_row;
            array_row->next_row = new_row;
            
            //initalising sentine already done! 
    }

    //Move to the target row
    array_row = array_row->next_row;
    //Find the cell before the target cel  
    Array_entry *array_entry = FindColBefore(c,array_row->sentinel);
    
    if(array_entry->next_entry == nullptr || array_entry->next_entry->colNum > c ){
            
            Array_entry *new_entry =  new Array_entry();
            new_entry->colNum = c;
            new_entry->next_entry = array_entry->next_entry;
            array_entry->next_entry = new_entry;
            
            //initalising sentine already done! 
    }

    //Move to the target entry
    array_entry = array_entry->next_entry;
    //se the value;
    array_entry->value = v;
}

Array_row * SparseArray::FindRowBefore(int r){
    Array_row *r_iter = this->top;
    while((r_iter->next_row!=nullptr) &&
          (r_iter->next_row->rowNum < r)){
              r_iter = r_iter->next_row;
    }
    return r_iter;
}

Array_entry * SparseArray::FindColBefore(int c,Array_entry *sentinel){
    Array_entry *c_iter = sentinel;
    while((c_iter->next_entry!=nullptr) &&
          (c_iter->next_entry->colNum < c)){
              c_iter = c_iter->next_entry;
    }
    return c_iter;
}
