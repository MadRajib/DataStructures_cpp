#include "lcgs.h"
#include <iostream>
int LCGS::generate(){
    seed = (seed*A+B)%M;
    return seed;
}
int LCGS::generate(int min,int max){
    /* one way*/
    /* return min + (generate())%(max-min +1); */
    
    /* Another way: good way*/
    float  fract = generate()/(float)M;
    return min + (fract)*(max-min );
}
