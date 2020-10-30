complexity is O(N)
#include <iostream>
#include<unordered_set>
using namespace std;

int longestCosecutive(int arr[], int n){
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);//complexity: O(1)
    }

    //iterate over all elements
    //target from those a stream can start i.e., head of streak

    int max_length = 1;
    for(int i=0; i<n; i++){
        if(s.find(arr[i]-1) == s.end()){
            //if less then a[i] is no there
            //a[i] is a starting point of streak
            //traverse the entire range that is contained in that streak 
            int next_no = arr[i] +1;
            int streak_len = 1;
            while(s.find(next_no)!=s.end()){
                next_no += 1;
                streak_len += 1;
            }
            max_length = max(max_length, streak_len);
        }
    }
    return max_length;
}

int main() {
    int arr[] = {1,3,4,5,6,2,7,8,12,44,55,66,50};
    int n = sizeof(arr)/sizeof(int);
    cout<<longestCosecutive(arr,n)<<endl;
    return 0;
}

//op: 8