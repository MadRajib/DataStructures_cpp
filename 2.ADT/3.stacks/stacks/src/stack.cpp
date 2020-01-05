#include "stack.h"
#include <string.h>

template class LStack<int>;
template class LStack<float>;

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
    return STACK_DEFAULT_VALUE;
}

template <class T>
T LStack<T>::stackTop(){
    if(this->top->next!=nullptr){
        return this->top->next->data;
    }
    return STACK_DEFAULT_VALUE;
}

template <class T>
T LStack<T>::size(){
    return this->count;
}

template <class T>
bool LStack<T>::isEmpty(){
     return this->top->next == nullptr;
}
