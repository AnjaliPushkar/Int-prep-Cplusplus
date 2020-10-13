//largest and smallest
#include <iostream>
#include<climits>
using namespace std;

int main(){
   
    int i, n, key;
    cin>>n;
    
     // initialization of an array
    int a[1000];
    
    // taking input from user
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    for(i=0; i<n; i++){
        if(a[i]>largest){
            largest = a[i];
          
        }
        if(a[i]<smallest){
            smallest = a[i];
            
        }
    }
    //printing output
    cout<<"Largest"<<largest<<endl;
    cout<<"Smallest"<<smallest<<endl;
  
    return 0;
}