#include <iostream>
#include <vector>
#include <string>
#include <stack>
#define REP(a,b) for(int i=a;i<b;i++)
#define rREP(a,b) for(int i=a;i>=b;i--)

#define rFOR(i,n) rREP(i,n)
#define vi vector<int>
#define pb push_bach
#define ll long long
using namespace std;

string pretty_json(string json){
    string res = "";
    int mult = 0;
    for(auto x:json){
        switch (x){
        case '{':
        case '[':
            mult++;
            res +=string(1,x) + "\n";
            FOR(0,mult) res+="  ";
            break;
        case '}':
        case ']':
                mult--;
                res += "\n";
                FOR(0,mult) res+="  ";
                res+= string(1,x);
                break;
        
        case ',':
            res += string(1,x) + "\n";
            FOR(0,mult) res+="  ";
                break;
        default:
                res += string(1,x);
                break;
        }
    }
    return res;
}   
int main(){

    string json = "{id: 0001,type: donut,name: Cake,ppu: 0.55,batters:{batter:[{ id: 1001, type: Regular },{ id: 1002, type: Chocolate }]},topping:[{ id: 5001, type: None },{ id: 5002, type: Glazed }]}";
    // json = "{{{ }}}";
    cout<<pretty_json(json)<<endl;

    return 0;
}