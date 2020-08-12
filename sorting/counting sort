#include <iostream>
using namespace std;

void countingSort(int arr[], int n){
    int largest = -1;
    for(int i=0; i<n; i++){
        largest = max(largest, arr[i]);
    }

    int *freq = new int[largest+1]{0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main() {
    int arr[] = {88, 97, 10, 12, 4, 2 ,5, 6, 7 ,5,5};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
Output
2 4 5 5 5 6 7 10 12 88 97 
*/