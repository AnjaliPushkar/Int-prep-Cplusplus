#include<iostream>
#include<algorithm>
using namespace std;

void calculateWater(int n, int arr[]){
    int count = 0;
    int i=0; 
    int j = n-1;
    int left = 0;
    int right = 0;
    while(i<=j){
        if(arr[i]>arr[j]){
            if(arr[j]>right){
                right =arr[j];
            }
            else{
                count += right - arr[j];
            }
            j--;
        }   
        else{
            if(arr[i]>left){
                left = arr[i];
            }
            else{
                count += left -arr[i];
            }
            i++;
        }
        
    }
    
   cout<<count;
}

int main(){
    int n ;
	cin>>n;
    int arr[1000000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    calculateWater(n, arr);
    return 0;
}

/*
ip:10
0 2 1 3 0 1 2 1 2 1
op:5
*/