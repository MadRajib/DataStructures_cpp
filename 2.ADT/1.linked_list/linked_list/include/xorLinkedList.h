#ifndef xorLinkedList_h
#define xorLinkedList_h
#include <cstdint>
#include <iostream>

class XorLlist{
    private:
        struct Cell{
            Cell() = default;
            Cell(int v):value(v){}
            int value;
            Cell *next = nullptr;
        };

        Cell *top,*btm;
    public:
        XorLlist();
        void addAtBegining(int );
        void addAtEnd(int );
        void insertAfter(int ,int );
        void insertSorted(int);
        void deleteCell(int);
        void destroyList();
        void copyList(XorLlist );
        void isort();
        Cell *begin(){
            return this->top;
        }
        void print();
        void rprint();
        Cell *xorPtr(Cell *x,Cell *y){
            return (Cell *)((uintptr_t)(x)^(uintptr_t)(y));
        }
};



#endif