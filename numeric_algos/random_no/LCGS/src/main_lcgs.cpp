#include "lcgs.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]){
    
    LCGS random;
    // cout<< random.generate() <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    cout<< random.generate(1,10) <<endl;
    
    return 0;
}
