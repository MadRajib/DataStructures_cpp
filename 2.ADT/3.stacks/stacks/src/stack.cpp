#include "stack.h"
#include <string.h>
#include <exception>
#include <algorithm>

class StackOverFlow: public std::exception{
    private:
        std::string msg;
        std::string desc ="stack_over_flow:stack is full!";
    public:
        StackOverFlow(std::string s):msg(s+std::string(" :") +desc ){}
        virtual const char* what() const throw(){
            return  msg.c_str();
        }
};

class StackUnderFlow: public std::exception{
    private:
        std::string desc = "stack_under_flow:stack is empty!";
        std::string msg;
    public:
        StackUnderFlow(std::string s):msg(s+std::string(" :") +desc ){}
        virtual const char* what() const throw(){
            return  msg.c_str();
        }
};

// For stack using linked lists
template class LStack<int>;
template class LStack<float>;
template class LStack<char>;

template <class T>
LStack<T>::LStack(){
    Cell *sentinel = new Cell();
    top = sentinel;
    this->count = 0;
}

template <class T>
LStack<T>::~LStack(){
    this->count = 0;
}
template <class T>
void LStack<T>::push(T v){
    Cell *c = new Cell(v);
    c->next = this->top->next;
    this->top->next = c;
    (this->count)++;
}

template <class T>
T LStack<T>::pop(){
    if(this->top->next!=nullptr){
        Cell *tmp = this->top->next;
        T data = tmp->data; 
        this->top->next = tmp->next;
        delete tmp;

        return data;
    }
    StackUnderFlow StackEmpty("LStack");
    throw StackEmpty;
}

template <class T>
T LStack<T>::stackTop(){
    if(this->top->next!=nullptr){
        return this->top->next->data;
    }
    StackUnderFlow StackEmpty("LStack");
    throw StackEmpty;
}

template <class T>
T LStack<T>::size(){
    return this->count;
}

template <class T>
bool LStack<T>::isEmpty(){
     return this->top->next == nullptr;
}



// For stacks using arrays
template class AStack<int>;
template class AStack<float>;
template class AStack<char>;

template <class T>
AStack<T>::AStack(size_t sz){
    this->MAX_SIZE = sz;
    this->count = 0;
    this->top = -1;
    this->bucket = new T[this->MAX_SIZE];
}

template <class T>
AStack<T>::~AStack(){
    this->count = 0;
    this->top = -1;
    delete[] this->bucket;
}
template <class T>
void AStack<T>::push(T v){
    if(this->count == this->MAX_SIZE){
        StackOverFlow StackFull("AStack");
        throw StackFull;
    }
    this->bucket[++(this->top)] = v;
    (this->count)++;
}

template <class T>
T AStack<T>::pop(){
    if(0 == this->count){
        StackUnderFlow StackEmpty("AStack");
        throw StackEmpty;
    }
    (this->count)--;
    return this->bucket[(this->top)--];
}   

template <class T>
T AStack<T>::stackTop(){
    if(this->count > 0){
        return this->bucket[this->top];
    }
    StackUnderFlow StackEmpty("AStack");
    throw StackEmpty;
}

template <class T>
T AStack<T>::size(){
    return this->count;
}

template <class T>
bool AStack<T>::isEmpty(){
    return 0 == this->count ;
}




// For stacks using dynamic arrays
template class DAStack<int>;
template class DAStack<float>;
template class DAStack<char>;

template <class T>
void DAStack<T>::doubleStack(){
    size_t old_size = this->MAX_SIZE;
    this->MAX_SIZE = 2* this->MAX_SIZE;
    T *newArray = new T[this->MAX_SIZE];
    std::copy(this->bucket,this->bucket+old_size,newArray);
    delete[] this->bucket;
    this->bucket = newArray;
}

template <class T>
DAStack<T>::DAStack(){
    this->MAX_SIZE = 1;
    this->count = 0;
    this->top = -1;
    this->bucket = new T[this->MAX_SIZE];
}

template <class T>
DAStack<T>::~DAStack(){
    this->count = 0;
    this->top = -1;
    delete[] this->bucket;
}
template <class T>
void DAStack<T>::push(T v){
    if(this->count == this->MAX_SIZE){
        this->doubleStack();
    }
    this->bucket[++(this->top)] = v;
    (this->count)++;
}

template <class T>
T DAStack<T>::pop(){
    if(0 == this->count){
        StackUnderFlow StackEmpty("DAStack");
        throw StackEmpty;
    }
    (this->count)--;
    return this->bucket[(this->top)--];
}   

template <class T>
T DAStack<T>::stackTop(){
    if(this->count > 0){
        return this->bucket[this->top];
    }
    StackUnderFlow StackEmpty("DAStack");   
    throw StackEmpty;
}

template <class T>
T DAStack<T>::size(){
    return this->count;
}

template <class T>
bool DAStack<T>::isEmpty(){
    return 0 == this->count ;
}