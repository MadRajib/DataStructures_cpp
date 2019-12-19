#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "integral.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

float pie(float x){
    return sqrt(4- (x*x) );
}

int main(int argc, char const *argv[]){
    cout<<"Using Rectangle Rule : "<< RectangleRule(pie,0,2,100)<<endl;
    cout<<"Using Trapezoid Rule : "<< TrapezoidRule(pie,0,2,100)<<endl;
    
    return 0;
}
