#include <iostream>
#include <string>
#include <vector>
#include "fastExpo.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    if (argc > 2){
        float b = atoi(argv[1]);
        int p = atoi(argv[2]);
        
        if(argc == 3 )
            cout<< exppow(b,p) <<endl;
        else {
            int m = atoi(argv[3]);
            cout<< exppow(b,p,m) <<endl;
        }
        
    }else{
        cerr<<"To less arguments provide!"<<endl;
    }
    return 0;
}
