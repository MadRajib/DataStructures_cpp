#include <iostream>
#include <string>
#include <vector>
#include "stack.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    
    LStack<int> sl = LStack<int>();
    sl.push(2);
    sl.push(10);
    cout<< sl.size() <<endl;
    cout<< sl.stackTop() <<endl;
    cout<< sl.isEmpty() <<endl;
    
    cout<<sl.pop()<<endl;
    cout<<sl.pop()<<endl;

    cout<< sl.isEmpty() <<endl;

    return 0;
}
