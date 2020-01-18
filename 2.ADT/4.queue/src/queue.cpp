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
T LQueue<T>::dequeue(){
        if(this->top->next!=nullptr){
                Cell *tmp =  this->top->next;
                T data = tmp->data;
                if(tmp->next == nullptr){
                        this->tail = this->top;
                }
                this->top->next = tmp->next;
                tmp->next = nullptr;
                delete tmp;
                return data;
        }
        throw ;
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


template class Cqueue<int>;
template <class T>
void Cqueue<T>::enqueue(T v){
        if((next+1)%q_size == last){
                throw;
        }else{
                queue[next] = v;
                next = (next+1)%q_size;
                count++;
        }
}

template <class T>
T Cqueue<T>::dequeue(){
        if(last==next){
                throw;
        }
        T data = queue[last];
        last = (last+1)%q_size;
        
        return data;

}

template <class T>
void Cqueue<T>::print(){
        size_t iter = last;
        while(iter!=next){
                std::cout<<queue[iter]<<" ";
                iter = (iter+1)%q_size;
        }
        std::cout<<std::endl;

}