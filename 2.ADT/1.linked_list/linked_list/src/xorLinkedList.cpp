#include "xorLinkedList.h"

XorLlist::XorLlist(){
    Cell* t_sentinel =  new Cell();
    Cell* b_sentinel =  new Cell();
    t_sentinel->next =  xorPtr(nullptr,b_sentinel);
    b_sentinel->next =  xorPtr(nullptr,t_sentinel);
    this->top = t_sentinel;
    this->btm = b_sentinel;
}

void XorLlist::print(){
    Cell *prev = nullptr;
    Cell *next = xorPtr(prev,this->top->next);
    prev = this->top;
    while(next!=this->btm){
        std::cout<<next->value<<" ";
        Cell *tmp = next;
        next = xorPtr(prev,next->next);
        prev = tmp;
    }    
    std::cout<<std::endl;
}

void  XorLlist::addAtBegining(int v){
    Cell *new_node = new Cell(v);
    Cell *next_to_top = xorPtr(nullptr,this->top->next);
    
    new_node->next = xorPtr(this->top,next_to_top);

    top->next = xorPtr(nullptr,new_node);

    next_to_top->next = xorPtr(new_node,xorPtr(top,next_to_top->next));

}

 void XorLlist::addAtEnd(int ){

 }