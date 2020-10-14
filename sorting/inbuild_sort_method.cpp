#include<iostream>
//must include algorith file
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
// arr+n is equal to arr+n-1 i.e. last element excluded
    sort(arr, arr+n);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    return 0;
}