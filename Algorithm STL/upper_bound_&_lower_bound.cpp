#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
   int arr[] = {1,2,4,4,4,5,6};
   int n = sizeof(arr)/sizeof(int);
   int key;
   cin>>key;
   
//   search key
    bool present = binary_search(arr, arr+n, key);
    if(present){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }
    
   
   //where it is present at the first time7
    auto lb = lower_bound(arr, arr+n, 3);
    cout<<endl<<(lb-arr)<<endl;
    
    // >=
    if((lb-arr)==n){
        cout<<"key not present";
    }
    //  >
    auto ub = upper_bound(arr, arr+n, 3);
    cout<<(ub-arr)<<endl;
    
     // occuence of any number
    cout<<"occurence of key"<<(ub-lb);

    return 0;
}