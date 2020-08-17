#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    if(n==1){
        return;
    }
    //after you have moved to largest element in the current part to the end of the array by pairwise comparision 
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //sort the first n-1 comparision
    bubbleSort(arr, n-1);
}

void bubbleSortOptimization(int arr[], int i, int n){
    if(n==1){
        return;
    }
    if(i == n-1){
        return bubbleSortOptimization(arr, 0, n-1);
    }
    if(arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
    }
    bubbleSortOptimization(arr, i+1, n);
    return;
}

int main(){
     int arr[]={5,4,3,1};
     int n=4;
     bubbleSort(arr,n);
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

     bubbleSortOptimization(arr, 0, n);
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     return 0;
}