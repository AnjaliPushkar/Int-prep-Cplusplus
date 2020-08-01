// binary search to find the first and last occurence of key
#include<iostream>
using namespace std;

int firstOccurence(int arr[], int key, int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int key, int n){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3,3, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<firstOccurence(arr, key, n)<<endl;
    cout<<lastOccurence(arr, key, n);
    
    return 0;
}
/*
ip: 3
op: 2
    6
*/