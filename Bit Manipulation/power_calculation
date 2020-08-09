//calculate power using bitwise operator in optimized way
//ex n=2, p=5   op: 32

#include<iostream>
using namespace std;

int powerOptimized(int n, int p){
    int ans = 1;
    while(n>0){
        int last_bit = p&1;
        if(last_bit == 1){
            ans *= n;
        }
        n = n*n;
        p = p>>1; //discard the last bit
    }
    return ans;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<powerOptimized(n,p);
    return 0;
}