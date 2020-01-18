#include <iostream>
#include <string>
#include <vector>
#include "sorting.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    int arr[] = {1,5,3,6};
    print(arr,4);
    build_heap(arr,4);
    make_heap(arr,4);
    print(arr,4);
    
    return 0;
}
