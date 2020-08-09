#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
   int arr[5] = {1,7,4,8,2};
   int n = sizeof(arr)/sizeof(int);
   int key;
   cin>>key;
   
    //search key using find function
    auto it = find(arr, arr+n, key);
    int index = it - arr; //arr = base adress
    if(index==n){
        cout<<key<<"is not present";
    }
    else{
        cout<<"key is present at"<<index;
    }
   

    return 0;
}