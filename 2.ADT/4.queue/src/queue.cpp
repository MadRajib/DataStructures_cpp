#include "queue.h"
#include <string.h>


template class LQueue<char>;
template class LQueue<int>;
template class LQueue<float>;
template class LQueue<std::string>;

template <class T>
LQueue<T>::LQueue(){
        Cell *sentinel = new Cell();
        this->top = sentinel;
        this->tail = this->top;
}
template <class T>
void LQueue<T>::enqueue(T v){
        Cell *new_cell = new Cell(v);
        this->tail->next = new_cell;
        this->tail = this->tail->next;
}

template <class T>
void LQueue<T>::print(){
        Cell *iter = this->top;
        while(iter->next!= nullptr){
                std::cout<<iter->next->data<<" ";
                iter = iter->next;
        }
        std::cout<<std::endl;
}

        // T dequeue();
        // T front();
        // size_t getSize();
        // bool isEmpty();