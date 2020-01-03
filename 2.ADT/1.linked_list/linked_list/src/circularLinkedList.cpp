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
    Cell *new_node = new Cell(v);
    Cell *iter = this->top;
    while((iter->next!=this->top) && (iter->next->value < v)){
        iter = iter->next;
    }
    new_node->next = iter->next;
    iter->next = new_node;
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
void CircularLlist::destroyList(){
    Cell *iter = this->top;
    while(iter->next!=this->top){
        Cell *tmp = iter->next;
        iter->next = tmp->next;
        delete tmp;
    }
}
void CircularLlist::copyList(CircularLlist cll){
    destroyList();
    Cell *last_added = this->top;
    Cell *old_sentinel = cll.begin();
    Cell *old_cell = old_sentinel->next;

    while(old_cell!=old_sentinel){
        last_added->next = new Cell(old_cell->value);
        last_added = last_added->next;
        old_cell = old_cell->next;
    }
    last_added->next= this->top;
}
void  CircularLlist::isort(){
    CircularLlist cll =CircularLlist();
    Cell *iter = this->top;
    while(iter->next!=this->top){
        cll.insertSorted(iter->next->value);
         iter = iter->next;
    }
    copyList(cll);
    cll.destroyList();
    delete cll.begin();

}
