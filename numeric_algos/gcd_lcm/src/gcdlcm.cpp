#include "gcdlcm.h"
int gcd(int a,int b){
    while(b!=0){
        int r = a - (a/b)*b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a,int b){
    return (a/gcd(a,b))*b;
    // return (a*b)/gcd(a,b);
}