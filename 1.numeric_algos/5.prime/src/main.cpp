#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "prime.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char const *argv[]){


    if (argc > 1){
        
        int p = atoi(argv[1]);

        for(auto i: primefactors(p)){
            cout<<i<<" ";
        }
        cout<<endl;

        for(auto i: primesTill(p)){
            cout<<i<<" ";
        }
        cout<<endl;

        cout<< largestPrime(p)<<endl;

        cout<< "prime test for 10 -> "<<fermetPrimeTest(10,10) <<endl;
        cout<< "prime test for 7 -> "<<fermetPrimeTest(7,10) <<endl;
        
        
        
    }else{
        cerr<<"To less arguments provide!"<<endl;
    }
    return 0;
}
