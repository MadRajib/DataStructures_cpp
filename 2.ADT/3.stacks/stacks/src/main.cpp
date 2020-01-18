#include <iostream>
#include <string>
#include <vector>
#include "stack.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;


void sortStack(){
    DAStack<int> tmpStack;


}

int main(int argc, char const *argv[]){
    
    /*For stack using linked List */
    // LStack<int> sl = LStack<int>();
    // sl.push(2);
    // sl.push(10);
    // cout<< sl.size() <<endl;
    // cout<< sl.stackTop() <<endl;
    // cout<< sl.isEmpty() <<endl;
    
    // cout<<sl.pop()<<endl;
    // cout<<sl.pop()<<endl;

    // cout<< sl.isEmpty() <<endl;

    // /*For stack using array */
    // AStack<int> sl = AStack<int>(2);
    // sl.push(2);
    // sl.push(10);
    // cout<< sl.size() <<endl;
    // cout<< sl.stackTop() <<endl;
    // cout<< sl.isEmpty() <<endl;
    
    // cout<<sl.pop()<<endl;
    // cout<<sl.pop()<<endl;
    // cout<<sl.pop()<<endl;

    // cout<< sl.isEmpty() <<endl;

    /*For stack using dynamic array */
    // DAStack<int> sl = DAStack<int>();
    // sl.push(2);
    // sl.push(10);
    // cout<< sl.size() <<endl;
    // cout<< sl.stackTop() <<endl;
    // cout<< sl.isEmpty() <<endl;
    
    // cout<<sl.pop()<<endl;
    // cout<<sl.pop()<<endl;
    // cout<<sl.pop()<<endl;

    // cout<< sl.isEmpty() <<endl;


    // For double stack
    // DoubleStack<int> sl = DoubleStack<int>(10);
    // sl.push(0,2);
    // sl.push(1,10);
    // sl.push(0,3);
    // sl.push(1,4);
    // sl.push(1,6);
    // cout<< sl.size(0) <<endl;
    // cout<< sl.stackTop(0) <<endl;
    // cout<< sl.isEmpty(0) <<endl;
    
    // cout<< sl.size(1) <<endl;
    // cout<< sl.stackTop(1) <<endl;
    // cout<< sl.isEmpty(1) <<endl;
    
    // cout<<sl.pop(0)<<endl;
    // cout<<sl.pop(0)<<endl;
    // sl.push(0,10);
    // sl.push(0,11);
    // sl.push(0,12);
    // sl.push(0,13);
    // sl.push(0,14);
    // sl.push(0,16);
    // sl.push(0,17);
    // // sl.push(0,18);
    // sl.push(0,19);
    // sl.push(0,20);
    // sl.push(0,21);


    //cout<< sl.isEmpty(0) <<endl;
    //cout<< sl.isEmpty(1) <<endl;

    // LStack<int> ll = LStack<int>();
    // ll.push(34);
    // ll.push(3);
    // ll.push(31);
    // ll.push(98);
    // ll.push(92);
    // ll.push(23);
    // stackInsertionSort(ll);
    // cout<<ll.pop()<<endl;
    // cout<<ll.pop()<<endl;
    // cout<<ll.pop()<<endl;
    // cout<<ll.pop()<<endl;
    // cout<<ll.pop()<<endl;
    // cout<<ll.pop()<<endl;

    // cout<<ll.pop()<<endl;

    // stackSelectionSort(ll);
    // ll.print();

    TripleStack ts =  TripleStack(6);
    ts.push(1,1);
    ts.push(1,2);
    ts.push(2,1);
    ts.push(2,2);
    ts.push(3,1);
    ts.push(3,2);
    ts.print();
    ts.pop(1);
    ts.print();

    ts.pop(1);
    ts.print();

    ts.pop(2);
    ts.print();
    ts.pop(2);
    ts.print();

    ts.pop(3);
    ts.print();

    ts.pop(3);
    ts.print();

    ts.pop(3);
    ts.print();

    ts.push(1,4);
    ts.push(1,5);
    ts.push(2,6);
    ts.push(2,7);
    ts.push(3,8);
    ts.push(3,9);
    ts.print();
    return 0;
}
