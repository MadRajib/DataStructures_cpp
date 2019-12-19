#include <iostream>
#include <string>
#include <vector>
#include "randomise.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


void print(std::vector<int> &arr){
    for(auto elem: arr){
        cout<< elem;
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){

    cout<<"Enter the array seperated by ,or space \nending press enter and ctrl+d"<<endl;
    int word;
    vector<int> arr{};
    while(cin >>word){
        arr.push_back(word);
    }
    print(arr);

    // Randomise a array
    randomise(arr);
    print(arr);


    // Pick m random values without duplicates
    vector<int> pick;
    pickRandom(arr,pick,5);
    print(pick);


    // Pick m random values without duplicates
    vector<int> pick1;
    pickMFromN(arr,pick1,5);
    print(pick1);



    return 0;
}
