#ifndef queue_h
#define queue_h
#include <iostream>

template <class T>
class LQueue{
    private:
        struct Cell{
            T data;
            Cell() = default;
            Cell(T v):data(v){}
            Cell *next = nullptr;
        };
        Cell *top,*tail;
    public:
        LQueue();
        void enqueue(T v);
        T dequeue();
        T front();
        size_t getSize();
        bool isEmpty();
        void print();
};


#endif