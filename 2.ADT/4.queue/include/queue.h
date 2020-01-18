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


template <class T>
class Cqueue{
    private:
        T *queue;
        size_t q_size = 0;
        size_t count;
        size_t last=0,next=0;
    public:
        Cqueue(size_t sz){
            queue = new T[sz];
            q_size = sz;
            last = next = count = 0;
        }

        void enqueue(T v);
        T dequeue();
        void print();

};


#endif