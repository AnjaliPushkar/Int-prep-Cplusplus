// bubble sort
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    //itr is equals to iteration and n is length of array
    for (int itr=1; itr<=n-1; itr++){
        for(int j =0; j<=(n-itr-1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    return 0;
}