// insertion sort
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int start = 1;
    while(start<n){
        for(int i=start; i>0; i--){
            if(arr[i]<arr[i-1]){
                swap(arr[i], arr[i-1]);
            }
        }
    start++;
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    return 0;
}


-----------------------------------------------------------
//another method
//5 2 3 1
//i will start from 2(index=1) and j will strat from 5(0 index)
#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int current = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]> current){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = current;
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    return 0;
}