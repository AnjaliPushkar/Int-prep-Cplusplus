#include<iostream>
using namespace std;

//using float because sqaure root can be a float value
float binarySearch(int n, int p){
    int start = 0;
    int end = n;
    float ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if((mid*mid)==n){
            return mid;
        }
        else if((mid*mid) > n){
            ans = mid;
           end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    //for finding the floating part
    float inc = 0.1;
    for(int times=1; times<=p; times++){
        while(ans*ans <= n){
            ans =ans + inc;
        }
        ans =ans - inc;
        inc =inc/ 10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<binarySearch(n,3);
}

/*
ip : 11
op : 3.889
*/