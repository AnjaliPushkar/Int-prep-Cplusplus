#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

void longestSubarray(int arr[], int n){
    unordered_map<int,int>m;
    int pre=0;
    int len=0;
    for(int i=0; i<n; i++){
        pre += arr[i];
        //if sum==0
        if(pre == 0){
            len = max(len, i+1);
        }
        //if csum repeats
        if(m.find(pre)!=m.end()){
            len = max(len, i-m[pre]);
        }
        else{
            //store the first time occurence of sum
            m[pre] =i;
        }
    }
    cout<<len<<endl;
}

int main() {
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    longestSubarray(arr,n);
    return 0;
}
/*
Input
7
0 -1 1 2 5 -5 -2
Output
7*/