#include "stack.h"
#include <string.h>

template class LStack<int>;
template class LStack<float>;

template <class T>
LStack<T>::LStack(){
    Cell *sentinel = new Cell();
    top = sentinel;
}

template <class T>
LStack<T>::~LStack(){
}
template <class T>
void LStack<T>::push(T v){
    Cell *c = new Cell(v);
    c->next = this->top->next;
    this->top->next = c;
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
    return -1;
}
