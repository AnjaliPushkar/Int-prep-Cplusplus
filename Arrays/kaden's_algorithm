// sum of subarray using kadens algo in single loop with complexity O(n) using Kaden's Algorithm
// -4    5  2 -3  9
// cs=0  5  7  4  13
// mx=0  5  7  7  13

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   
   int arr[1000];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   
   int currentsum = 0;
   int maxsum = 0;
   
//   kadens algorithm

    for(int i=0; i<n; i++){
        currentsum += arr[i];
        if (currentsum<0){
            currentsum=0;
        }
        maxsum = max(currentsum, maxsum);
    }
    cout<<maxsum<<endl;
   
    return 0;
}