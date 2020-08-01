#include <iostream>
using namespace std;


//clearing a range of bits from ith index to jth index
//mask is divided into two parts, a and b
int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n& mask;
    return ans;
}

int replaceBits(int n, int m, int i, int j){
    int n_ = clearRangeItoJ(n, i,j);
    int ans = n_|(m<<i);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int i;
    cin>>i;
    int j;
    cin>>j;
    
    cout<<replaceBits(n,m,i,j);
    return 0;  
}