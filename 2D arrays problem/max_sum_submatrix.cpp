#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

int maxSum(int n, int m, int arr[][100]){
    //col wise addition first
    for(int i=n-1; i>=0; i--){
        for(int j=m-1; j>=0; j--){
            arr[i][j] += arr[i][j+1];
        }
    }
    //row wise addition secondly
    for(int i=m-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            arr[i][j] += arr[i+1][j];
        }
    }
    int result = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result = max(result, arr[i][j]);
        }
    }
    return result;
}

int main(){
    int n, m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<maxSum(n,m,arr);
    return 0;
}

/*
ip: 4 3
-1 -2 -3 
-2 2 5
-4 6 6 
op: 19
*/