// practical time comparision btw merge sort and bubble sort
#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[],int n){
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
        arr[i] = n-i;
    }

    time_t start = clock();
    bubbleSort(arr, n);
    time_t end = clock();
    cout<<"bubble sort time "<<end-start<<endl;

    for (int i=0; i<n; i++){
       arr[i] = n-i;
    }

    start = clock();
    sort(arr, arr+n);
    end = clock();
    cout<<"merge sort time "<<end-start<<endl;
    return 0;
}
/*
Input
100
Output
bubble sort time 58
merge sort time 6
Input
1000
Output
bubble sort time 9963
merge sort time 70
*/