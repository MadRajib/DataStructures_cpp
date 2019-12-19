#include "fastExpo.h"

float exppow(float b,int p){
    int res = 1;
    while(p > 0){
        if (p & 1) res *= b;
        p = p>>1;
        b*=b;
    } 
    return res;
}
float exppow(int b,int p,int m){
    int res = 1;
    while(p > 0){
        if (p & 1){
            res = (res*b )% m;
        } 
        p = p>>1;
        b= (b*b)%m;
    } 
    return res;
}