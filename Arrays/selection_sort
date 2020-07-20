// Selection short

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    //fix position at index 0 and compare with each element so that smallest element will come here and then increase by 1 
    int pos = 0;
    while(pos<n-1){
        for(int i=pos+1; i<n; i++){
            if (arr[pos] > arr[i]){
                swap(arr[pos], arr[i]);
            }
        }
        pos++;
    }
    return ;
}

int main()
{
    int n, key;
    cin>>n;
    
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
   
    selectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


---------------------------------------------------------------
another way of selection sort
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main(){
    int n,i;
    cin >> n;
    
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<',';
        }
    return 0;
}