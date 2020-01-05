#ifndef stack_h
#define stack_h
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
    int count = 0;
public:
    LStack(/* args */);
    ~LStack();
    void push(T v);
    T pop();
    T stackTop();
    T size();
    bool isEmpty();
};


#endif