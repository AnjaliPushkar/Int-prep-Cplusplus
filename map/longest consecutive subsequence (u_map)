#include <iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int longestCosecutive(int arr[], int n){
    unordered_map<int,int>m;//value, length
    for(int i=0; i<n; i++){
        int no = arr[i];
        //if there is no smaller consecutive and no higher consecutive, len=1
        if(m.count(no-1) == 0 and m.count(no+1) == 0){
            m[no] = 1;
        }
        else if(m.count(no-1) and m.count(no+1)){
            int len1 = m[no-1];
            int len2 = m[no+1];
            //total length 
            int streak = len1 + 1 + len2;
            //total lenth is equal to streak
            m[no-len1] = streak; 
            m[no+len2] = streak;
        }
        else if(m.count(no-1) and !m.count(no+1)){
            int len = m[no-1];
            m[no-len] = len+1;
            m[no] = len+1;
        }
        else{
            int len = m[no+1];
            m[no+len] = len+1;
            m[no] = len+1;
        }
    }
    int largest = 0;
    for(auto p:m){
        largest = max(largest, p.second);
    }
    return largest;
}

int main() {
    int arr[] = {1,3,4,5,6,2,7,8,12,44,55,66,50};
    int n = sizeof(arr)/sizeof(int);
    cout<<longestCosecutive(arr,n)<<endl;
    return 0;
}

//op: 8