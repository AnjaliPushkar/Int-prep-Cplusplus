#include<iostream>
using namespace std;

//first approach
//time complexity : O(logn +1)
int countBits(int n){
    int ans=0;
    while(n>0){
        ans += (n&1);
        n = n>>1; 
    }
    return ans;
}

//second approach
//time complexity : O(no. of set bits)
int countFastBits(int n){
    int ans =0;
    while(n>0){
        n = n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
    cout<<countFastBits(n)<<endl;
    cout<<__builtin_popcount(n);//bulit in method(third aproach)
    return 0;
}