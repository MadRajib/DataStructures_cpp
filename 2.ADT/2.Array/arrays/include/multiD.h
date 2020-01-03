#ifndef multiD_h
#define multiD_h
#include <iostream>

class MyArray{
    public:
        int *l_bds;
        int *sliceSize;
        int _dims;
        void initArray(int [],size_t sz);
        int MapIndicesToIndex(int [],size_t);
};


#endif