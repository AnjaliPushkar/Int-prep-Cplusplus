#include<iostream>
using namespace std;

int findKey(int n, int arr[], int key){
    int start= 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>=arr[start]){
            if(key>=arr[start] and key<=arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(key>=arr[mid] and key<=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<findKey(n,arr,key);
    return 0;
}

/*
input : 5
4 5 1 2 3
2
output: 3
*/