#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findMedian(vector<vector<int> > &A) {
    int n = (A.size()*A[0].size()) /2;
    int cnt = 0;
    for(int i = 0;i<A.size();i++){
        for(int j = 0;j<A[0].size();j++){
            int x = A[i][j];
            int cnt = 0;
            //for each row
            for(int i = 0;i<A.size();i++){
                
                int l = 0, h = A[0].size()-1;
                int index = 0;
                
                //binary search 
                while(l<=h){
                    int m = (l+h)/2;
                    if(A[i][m]== x){
                        index = m;
                        break;
                    }
                    if(A[i][m]< x ) l = m+1;
                    else h = m-1;
                }
                if(l>=h) index = l;
                
                cnt +=(index);
                
                if(cnt >= n) return x;
            }        
        }
    }
}
int main(){
    vector<vector<int>> ans = {
  {9, 10, 10, 13, 14, 15, 16, 16, 16, 17, 18},
  {1, 4, 9, 14, 16, 18, 19, 22, 26, 26, 27},
  {4, 6, 7, 10, 14, 20, 21, 23, 24, 27, 28}
};

cout<<findMedian(ans)<<endl;
    
}