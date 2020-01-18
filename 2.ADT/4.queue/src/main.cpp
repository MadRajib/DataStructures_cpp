#include <iostream>
#include <string>
#include <vector>
#include "queue.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    // LQueue<int> lq = LQueue<int>();
    // lq.enqueue(12);
    // lq.enqueue(13);
    // lq.print();
    // lq.dequeue();
    // lq.dequeue();
    // lq.print();
    // lq.enqueue(13);
    // lq.print();
    // lq.enqueue(13);
    // lq.dequeue();
    // lq.dequeue();
    // lq.dequeue();

    Cqueue<int> cq = Cqueue<int>(10);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.print();
    cq.dequeue();
    cq.print();
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);
    
    cq.enqueue(70);
    cq.print();
    cq.enqueue(80);
    cq.dequeue();
    cq.print();
    cq.enqueue(90);
    cq.print();
    cq.enqueue(100);
    return 0;
}
