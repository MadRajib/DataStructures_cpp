#include "triangularArray.h"
int findIndex(int r, int c){
        /* To handle cell that are missing*/
        if (c>r) {
            auto tmp = r;
            r = c;
            c = tmp;
        }
        return ((r)*(r) + (r))/2 + c;
}