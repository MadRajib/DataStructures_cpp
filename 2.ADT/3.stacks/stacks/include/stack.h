#ifndef stack_h
#define stack_h

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
public:
    LStack(/* args */);
    ~LStack();
    void push(T v);
    T pop();
};


#endif