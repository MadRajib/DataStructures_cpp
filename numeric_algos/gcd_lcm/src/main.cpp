#include <iostream>
#include <string>
#include <vector>
#include "gcdlcm.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[]){
    if (argc > 2){
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        cout<<gcd(a,b)<<endl;
        cout<<lcm(a,b)<<endl;

    }else{
        cerr<<"To less arguments provide!"<<endl;
    }
    return 0;
}
