#include <iostream>
#include <string>
#include <vector>
#include "linked_list.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
void print(Cell *i){
    while(i->next!= nullptr){
        cout<<i->next->value<<" ";
        i = i->next;
    }
    cout <<endl;
}

int main(int argc, char const *argv[]){

    Llist l = Llist();
    auto beg = l.begin();

    l.addAtBegining(12);
    print(beg);
    
    l.addAtEnd(13);
    print(beg);

    l.addAtBegining(10);
    print(beg);

    l.insertAfter(10,8);
    l.insertAfter(14,9);
    l.insertAfter(12,7);
    l.insertAfter(7,15);
    l.insertAfter(9,16);
    print(beg);


    l.deleteCell(10);
    print(beg);

    l.deleteCell(16);
    print(beg);

    l.deleteCell(12);
    print(beg);

    l.destroyList();

    print(beg);

    l.insertAfter(9,16);
    
    print(beg);

    return 0;
}
