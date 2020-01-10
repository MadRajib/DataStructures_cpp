#ifndef stack_h
#define stack_h
#include <iostream>

#define STACK_DEFAULT_VALUE -1

// Stack class using linked list
template <class T>
class LStack{
private:
    struct Cell {
        T data;
        Cell *next = nullptr;
        Cell() = default;
        Cell(T v):data(v){}
    };
    Cell *top;
    int count;
    

public:
    LStack(/* args */);
    ~LStack();
    void push(T v);
    T pop();
    T stackTop();
    T size();
    bool isEmpty();
    void print();
};


// Stack class using arrays
template <class T>
class AStack{
private:
    int count;
    size_t MAX_SIZE;
    size_t top;
    T *bucket;
public:
    AStack(size_t sz);
    ~AStack();
    void push(T v);
    T pop();
    T stackTop();
    T size();
    bool isEmpty();
};

// Stack using dynamic arrays
template <class T>
class DAStack{
private:
    int count;
    size_t MAX_SIZE;
    size_t top;
    T *bucket;
    void doubleStack();
public:
    DAStack();
    ~DAStack();
    void push(T v);
    T pop();
    T stackTop();
    T size();
    bool isEmpty();
};


// Double stack using arrays
template <class T>
class DoubleStack{
private:
    int count_1, count_2;
    size_t MAX_SIZE;
    size_t top_1,top_2;
    T *bucket;
public:
    DoubleStack(size_t sz);
    ~DoubleStack();
    void push(int stk,T v);
    T pop(int stk);
    T stackTop(int stk);
    T size(int stk);
    bool isEmpty(int stk);
};
void stackInsertionSort(LStack<int> &);
void stackSelectionSort(LStack<int> &);
#endif