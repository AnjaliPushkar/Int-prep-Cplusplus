
#include<iostream>
using namespace std;

//find odd with and operator 
bool isOdd(int n){
    return (n&1);
}

//find ith bit in no. using and operator
int getBit(int n, int i){
    int mask = (1<<i);
    int ans = (n & mask)>0?1:0;
    return ans;
}

//set ith bit i.e., make ith bit to 1 if it is 0
//OR operation with 1(mask)
//if n=5, i=1, op=7
int setBit(int n, int i){
    int mask = (1<<i);
    int bit = (n|mask);
    return bit;
}

//clear the bit i.e., change to 0
int clearBit(int n, int i){
    int mask = ~(1<<i);
    int result = (n&mask);
    return result;
}

//change ith bit with value v
int updateBit(int n, int i, int v){
    int mask = ~(1<<i);
    int result = (n&mask);
    int final_ans = (result|(v<<i));
    return final_ans; 
}

//clearing last i bits from right
//i is no. of bits not index value
int clearLastBits(int n, int i){
    int mask = (-1<<i);
    return n& mask;
}

//clearing a range of bits from ith index to jth index
//mask is divided into two parts, a and b
int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    return n& mask;
}


int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int v;
    cin>>v;
    int j;
    cin>>j;
    
    cout<<isOdd(n)<<endl;//if odd i.e., true i.e., 1 
    cout<<getBit(n,i)<<endl;
    cout<<setBit(n,i)<<endl;//after making ith bit to 1 no will be changed according 
    cout<<clearBit(n,i)<<endl;
    cout<<updateBit(n,i,v)<<endl;
    cout<<clearLastBits(n, i)<<endl;
    cout<<clearRangeItoJ(n,i,j);
    return 0;  
}