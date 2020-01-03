#ifndef sparseArray_h
#define sparseArray_h

#define DEFAULT_VALUE -1
#include <iostream>
struct Array_entry{
            int colNum;
            int value;
            Array_entry *next_entry=nullptr;
};
struct Array_row{
            int rowNum;
            Array_row *next_row = nullptr;
            Array_entry *sentinel = new Array_entry(); 
};
class SparseArray{
     
    public:
        Array_row *top;

        SparseArray();
        void setValue(int r,int c,int v);
        int getValue(int r,int c);
        void deleteValue(int r,int c);
        Array_row * FindRowBefore(int r);
        Array_entry * FindColBefore(int c,Array_entry *sentinel);
        void print();
};
#endif