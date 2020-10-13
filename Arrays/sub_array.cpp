#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;    
  int arr[1000];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
      for(int j =i; j<n; j++){
// printing sub array
          for (int k= i; k<=j; k++){
              cout<<arr[k]<<",";
          }
          cout<<endl;
      }
  }
    return 0;
}

if arr=[1,2,3] then output will be 
1
1,2
1,2,3
2
2,3
3
