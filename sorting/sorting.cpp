#include<iostream>
using namespace std;

bool isSorted(int n, int arr[]){
    if(n==0 or n==1){
        return true;
    }
    if(arr[0]<arr[1] and isSorted(n-1, arr+1)){
        return true;
    }
    return false;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(n, arr);
    return 0;
}
/*false stored as 0
and true is stored as 1
*/