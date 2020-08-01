/*you have given stalls, cows, our task is to place the cows with the 
minimum distance btw each cow so that they can't hurt each other*/ 

#include<iostream>
using namespace std;

bool canPlaceCows(int stalls[], int n, int cows, int min_step){
    int last_cow = stalls[0];
    int count = 1;
    for(int i=0; i<n; i++){
        if(stalls[i] - last_cow >=min_step){
            last_cow = stalls[i];
            count++;
            if(count == cows){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int cows= 3;
    
    int start = 0;
    int end = stalls[n-1] - stalls[0];
    int ans = 0;
    
    while(start<=end){
        int mid = (start+end)/2;
        bool cowsRakhPaye = canPlaceCows(stalls, n, cows, mid);
        if(cowsRakhPaye){
            ans= mid;
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    cout<<ans;
    return 0;
}

op : 3