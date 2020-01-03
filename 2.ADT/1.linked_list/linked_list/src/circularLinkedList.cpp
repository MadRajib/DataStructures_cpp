#include "circularLinkedList.h"
#include <iostream>

CircularLlist::CircularLlist(){
    Cell *sentinel = new Cell();
    this->top =  sentinel;
    sentinel->next = this->top;
}

void CircularLlist::print(){
    Cell *iter = this->top;
    
    while(iter->next!=this->top){
        std::cout<<iter->next->value<<" ";
        iter = iter->next;
    }    
    std::cout<<std::endl;
}
void  CircularLlist::addAtBegining(int v){
    Cell *new_node = new Cell(v);
    new_node->next = this->top->next;
    this->top->next = new_node;
}

void CircularLlist::addAtEnd(int v){
    Cell *new_node = new Cell(v);
    Cell *iter = this->top;
    while(iter->next!=this->top){
        iter = iter->next;
    }
    new_node->next = this->top;
    iter->next = new_node;

}

void CircularLlist::insertAfter(int target,int v){
    Cell *new_node = new Cell(v);
    Cell *iter = this->top;
    while(iter->next!=this->top){
        if(iter->next->value == target){
             iter = iter->next;
            break;
        }
        iter = iter->next;
    }
    new_node->next = iter->next;
    iter->next = new_node;
}

void CircularLlist::insertSorted(int v){

}

void CircularLlist::deleteCell(int target){

    Cell *iter = this->top;
    while(iter->next!=this->top){
        if(iter->next->value == target){
            Cell *tmp = iter->next;
            iter->next = tmp->next;
            delete tmp;
            return;
        }
        iter = iter->next;
    }
}