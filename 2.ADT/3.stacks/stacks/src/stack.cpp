#include "stack.h"
#include <string.h>
#include <exception>

class StackOverFlow: public std::exception{
  virtual const char* what() const throw()
  {
    return "stack_over_flow:stack is full!";
  }
}StackFull;

class StackUnderFlow: public std::exception{
  virtual const char* what() const throw()
  {
    return "stack_under_flow:stack is empty!";
  }
}StackEmpty;

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
    return StackEmpty;
}

template <class T>
T LStack<T>::stackTop(){
    if(this->top->next!=nullptr){
        return this->top->next->data;
    }
    return StackEmpty;
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
        throw StackFull;
    }
    this->bucket[++(this->top)] = v;
    (this->count)++;
}

template <class T>
T AStack<T>::pop(){
    if(0 == this->count){
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