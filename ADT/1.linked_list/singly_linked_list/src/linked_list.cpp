#include "linked_list.h"
Llist::Llist(){
    Cell *sentinal = new Cell;
    this->top = sentinal;
}
void Llist::addAtBegining(int v){
    Cell *new_cell = new Cell(v);
    new_cell->next =  this->top->next;
    this->top->next = new_cell;
}

void Llist::addAtEnd(int v){
    Cell *new_cell = new Cell(v);
    Cell *iter = this->top;
    while(iter->next!=nullptr){
        iter = iter->next;
    }
    iter->next = new_cell;
}

void Llist::insertAfter(int target,int v){
    Cell *new_cell = new Cell(v);
    Cell *iter = this->top;
    while(iter->next!=nullptr){
        if(iter->next->value == target) { 
            iter = iter->next ;
            break;
        }
        iter = iter->next;
    }
    new_cell->next = iter->next;
    iter->next = new_cell;
}

void Llist::deleteCell(int target){
    Cell *iter = this->top;
    while(iter->next!=nullptr){
        
        if(iter->next->value == target) {
            Cell *tmp = iter->next->next;
            delete iter->next;
            iter->next= tmp;
            return ;
        }
        iter = iter->next;
    }
}

void Llist::destroyList(){
     Cell *iter = this->top;
    while(iter->next!=nullptr){
        Cell *tmp = iter->next->next;
        delete iter->next;
        iter->next = tmp;
    }

}

Cell *Llist::begin(){
    return this->top;    
}