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
            Cell *tmp = iter->next;
            iter->next= tmp->next;
            tmp->next = nullptr;
            delete tmp;
            return ;
        }
        iter = iter->next;
    }
}

void Llist::destroyList(){
     Cell *iter = this->top;
    while(iter->next!=nullptr){
        Cell *tmp = iter->next;
        iter->next= tmp->next;
        tmp->next = nullptr;
        delete tmp;
    }

}

Cell *Llist::begin(){
    return this->top;    
}


// Doubly linked list

DLlist::DLlist(){
    DCell *tsentinal = new DCell;
    DCell *bsentinal = new DCell;
    
    tsentinal->next = bsentinal;
    bsentinal->prev = tsentinal;

    this->top = tsentinal;
    this->btm = bsentinal;

}
void DLlist::addAtBegining(int v){
    DCell *new_cell = new DCell(v);
    new_cell->next =  this->top->next;
    new_cell->prev = this->top;

    this->top->next->prev = new_cell;
    this->top->next = new_cell;
}

void DLlist::addAtEnd(int v){
    DCell *new_cell = new DCell(v);
    new_cell->prev =  this->btm->prev;
    new_cell->next = this->btm;

    this->btm->prev->next = new_cell;
    this->btm->prev = new_cell;
}

void DLlist::insertAfter(int target,int v){
    DCell *new_cell = new DCell(v);
    DCell *iter = this->top;
    while(iter->next!= this->btm){
        if(iter->next->value == target) { 
            iter = iter->next ;
            break;
        }
        iter = iter->next;
    }
    new_cell->next = iter->next;
    new_cell->prev = iter;
    
    iter->next->prev = new_cell;
    iter->next = new_cell;
}

void DLlist::deleteCell(int target){
    DCell *iter = this->top;
    while(iter->next!=this->btm){
        
        if(iter->next->value == target) {
            DCell *tmp = iter->next;
            iter->next = tmp->next;
            tmp->next->prev = iter;

            tmp->next = nullptr;
            tmp->prev = nullptr;
            delete tmp;
            return ;
        }
        iter = iter->next;
    }
}

void DLlist::destroyList(){
    DCell *iter = this->top;
    while(iter->next!=this->btm){
        DCell *tmp = iter->next;
        iter->next = tmp->next;
        tmp->next->prev = iter;

        tmp->next = nullptr;
        tmp->prev = nullptr;
        delete tmp;
    }

}

DCell *DLlist::begin(){
    return this->top;    
}

DCell *DLlist::end(){
    return this->btm;    
}
