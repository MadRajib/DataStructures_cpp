#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int firstMissingPositive(vector<int> &A) {
   
    for(int i =0;i<A.size();i++){
        if(A[i] < 1 || A[i] == i+1){
          continue;
        } 
        if(A[A[i]] < 1) A[A[i]] = 0;
        A[A[i]]+=A[i];
        A[i] = 0;
    }

    for(int i =0;i<A.size();i++){
        if(A[i] < 1 || A[i] == i+1){
          continue;
        }
        int tar = A[i];
        A[i] = i+1;
        A[tar-1] = tar - A[i];
    }
    
    for(int i =0;i<A.size();i++){
        if(A[i] <1) return i+1;
    }
    return A.size()+1;
}

int main(){
  vector<int> arry = {970, 288, 695, 332, 626, 190, 865, 987, 539, 789, 103, 315, 57, 603, 367, 617, 307, 509, 812, 39, 818, 803, 658, 678, 691, 688, 18, 587, 380, 86, 852, 227, 343, 967, 146, 275, 9, 81, 408, 681, 892, 328, 621, 348, 31, 560, 114, 220, 465, 354, 441, 185, 785, 218, 80, 788, 255, -1, 5, 932, 199, 294, 70, 222, 186, 964, 816, 129, 670, 542, 117, 43, 331, 843, 257, 955, 888, 298, 858, 52, 321, 374, 108, 644, 926, 68, 416, 764, 274, 110, 10, 759, 792, 424, 306, 263, 407, 988, 950, 601, 982, 994, 234, 230, 738, 60, 728, 839, 197, 131, 914, 585, 597, 571, 286, 388, 893, 769, 518, 145, 317, 761, 951, 989, 101, 972, 527, 570, 493, 679, 952, 949, 379, 968, 921, 853, 534, 301, 30, 309, 579, 412, 819, 119, 800, 568, 890, 668, 207, 312, 96, 311, 995, 546, 727, 451, 67, 78, 654, 726, 191, 940, 109, 616, 479, 148, 867, 413, 147, 368, 978, 896, 452, 642, 38, 922, 550, 887, 721, 894, 215, 468, 673, 557, 709, 664, 992, 356, 957, 732, 611, 432, 144, 435, 885, 308, 498, 910, 574, 748, 825, 602, 513, 492, 855, 889, 126, 42, 999, 873, 8, 876, 973, 497, 69, 99, 386, 463, 724, 360, 833, 899, 149, 152, 739, 442, 291, 866, 676, 831, 132, 607, 596, 981, 817, 770, 714, 703, 254, 845, 250, 880, 369, 956, 0, 572, 142, 628, 457, 59, 917, 719, 710, 928, 259, 750, 206, 102, 504, 503, 745, 947, 997, 741, 599, 918, 837, 342, 322, 684, 33, 985, 938, 166, 704, 314, 514, 620, 649, 177, 510, 202, 555, 540, 209, 224, 73, 648, 886, 77, 251, 74, 746, 766, 912, 482, 219, 205, 619, 104, 559, 350, 925, 361, 21, 847, 923, 971, 767};
  int res = firstMissingPositive(arry);
  cout<<res;
  cout<<endl;
}