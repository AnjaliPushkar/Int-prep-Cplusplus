//true if sum of subarray is 0
//using cummulative frequency
//pre is sum of subarrays, if p is repeating that means sum is 0 so return true

#include<iostream>
#include<unordered_set>
using namespace std;

bool chechSum(int arr[], int n){
    unordered_set<int>s;
    int pre=0;
    for(int i=0; i<n; i++){
        pre += arr[i];
        if(pre ==0 or s.find(pre) != s.end()){
            return true;
        }
        s.insert(pre);
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(chechSum(arr,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
/*
Input
5
6 -1 2  1 -1
Output
true
*/