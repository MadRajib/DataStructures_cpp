#include <iostream>
#include <string>
#include <vector>
#include "queue.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    LQueue<int> lq = LQueue<int>();
    lq.enqueue(12);
    lq.enqueue(13);
    lq.print();
    return 0;
}
