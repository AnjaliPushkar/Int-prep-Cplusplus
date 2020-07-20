// sum of subarray in 3 loop with complexity O(n^3)
//currentsum = sum from 0 to n then update to maxsum
//now currentsum = sum from 1 to n if this currentsum is greater thn maxsum thn update and carry on till all elements

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
   int left;
   int right;
  
    for(int i=0; i<n; i++){
       for(int j=i; j<n; j++){
           currentsum = 0;
           for(int k=i; k<=j; k++){
               currentsum += arr[k];
           }
               if(currentsum>maxsum){
                   maxsum = currentsum;
                   left = i;
                   right = j;
               }
           }
       }
       cout<<maxsum<<endl;
       
       for(int k=left; k<=right; k++){
           cout<<arr[k]<<",";
       }
    return 0;
}