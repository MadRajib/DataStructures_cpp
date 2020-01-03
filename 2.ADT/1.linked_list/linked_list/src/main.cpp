#include <iostream>
#include <string>
#include <vector>
#include "linked_list.h"
#include "circularLinkedList.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
// void print(Cell *i){
//     while(i->next!= nullptr){
//         cout<<i->next->value<<" ";
//         i = i->next;
//     }
//     cout <<endl;
// }

// void print(DCell *i,const DCell *end){
//     while(i->next!= end){
//         cout<<i->next->value<<" ";
//         i = i->next;
//     }
//     cout <<endl;
// }

int main(int argc, char const *argv[]){
    
    /* singly and doubly linked list */

    /*
    Llist l = new Llist();
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
    cout<<"sorting"<<endl;
    l.isort();
    print(beg);


    l.deleteCell(10);
    print(beg);

    l.deleteCell(16);
    print(beg);

    l.deleteCell(12);
    print(beg);

    l.destroyList();

    print(beg);


    DLlist dl = DLlist();
    auto dbeg = dl.begin();
    auto dend = dl.end();

    dl.addAtBegining(12);
    dl.addAtBegining(15);
    print(dbeg,dend);

    dl.addAtEnd(13);
    print(dbeg,dend);

    dl.insertAfter(14,8);
    print(dbeg,dend);

    dl.insertAfter(15,9);
    print(dbeg,dend);

    dl.insertAfter(12,10);
    print(dbeg,dend);

    dl.deleteCell(8);
    print(dbeg,dend);

    dl.deleteCell(15);
    print(dbeg,dend);

    dl.deleteCell(12);
    print(dbeg,dend);

    dl.destroyList();
    print(dbeg,dend);

    dl.addAtBegining(12);
    print(dbeg,dend);



    //sorted list text
    l.insertSorted(10);
    l.insertSorted(7);
    l.insertSorted(15);
    l.insertSorted(2);

    print(beg);

    Llist l2  = Llist();
    l2.copyList(l);

    beg = l2.begin();
    print(beg);
    
    */

   CircularLlist cll = CircularLlist();
   cll.print();
   cll.addAtBegining(1);
   cll.print();
   cll.addAtBegining(10);
   cll.print();
   cll.addAtEnd(12);
   cll.print();
   cll.insertAfter(10,13);
   cll.print();
   cll.insertAfter(12,14);
   cll.print();
   cll.deleteCell(12);
   cll.print();
   cll.deleteCell(10);
   cll.print();
   cll.deleteCell(14);
   cll.print();

    return 0;
}
