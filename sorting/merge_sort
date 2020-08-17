#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int i=s; 
    int j = mid+1;
    int k = s;
    int temp[100];

    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    //when one arr is copied after comparision so fill another as it is
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }
    //copy all the elements from temp arra to main arr
    for(int i=s; i<=e; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    //divide
    int mid = (s+e)/2;

    //recursively sort the array- s, mid and mid+1, e
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    //now merge both the arrays
    merge(arr, s, e);
}

int main(){
     int arr[]={5,6,1,2,4,0};
     int n=6;
     mergeSort(arr,0,n-1);
     for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;
}