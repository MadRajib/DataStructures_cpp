#include "randomise.h"

void randomise(std::vector<int> &arr){
    LCGS ran;
    int N = (int)arr.size();
    for (decltype(arr.size()) i = 0; i < arr.size(); i++){
        int j = ran.generate(i,N);
        auto temp = arr[i];
        arr[i] =  arr[j];
        arr[j] = temp;         
    }
}

void pickRandom(const std::vector<int> &arr,std::vector<int> &pick,const int k){
    LCGS ran;
    int N = (int)arr.size();
    auto num_picked = 0;
    //TODO: optimise piecked wih hashmap

    bool picked[N]{};
    while(num_picked<k){
        int j = ran.generate(1,N);
        if(!picked[j]){
            picked[j] = true;
            pick.push_back(arr[j]);
            num_picked++;
        }
    }
}


void pickMFromN(std::vector<int> ar1,std::vector<int> &pick,const int k){
    LCGS ran;
    int N = (int)ar1.size();
    for (decltype(ar1.size()) i = 0; i < k; i++){
            int j = ran.generate(i,N);
            auto temp = ar1[i];
            ar1[i] =  ar1[j];
            ar1[j] = temp;
            pick.push_back(ar1[i]);         
        }
}