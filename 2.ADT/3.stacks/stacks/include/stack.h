#ifndef stack_h
#define stack_h
#include <iostream>

#define STACK_DEFAULT_VALUE -1
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
};


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


#endif