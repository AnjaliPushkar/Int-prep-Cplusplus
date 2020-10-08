#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

void longestSubarray(int arr[], int n, int k){
    unordered_map<int,int>m;
    int pre=0;
    int len=0;
    for(int i=0; i<n; i++){
        pre += arr[i];
        //if sum==k
        if(pre == k){
            len = max(len, i+1);
        }
        //if csum repeats
        if(m.find(pre-k)!=m.end()){
            len = max(len, i-m[pre-k]);
        }
        else{
            //store the first time occurence of sum
            m[pre] =i;
        }
    }
    cout<<len<<endl;
}

int main() {
    int n,k;
    cin>>n>>k; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    longestSubarray(arr,n,k);
    return 0;
}
/*
Input
5 3
1 -1 5 -2 3
Output
4
*/