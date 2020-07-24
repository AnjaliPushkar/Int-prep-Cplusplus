//key will equals to the sum of pair of elements
#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6};
    int key=7;
    int i=0;
    int j = (sizeof(arr)/sizeof(int))-1;
    
    while(i<j){
        if((arr[i] + arr[j]) > key){
            i++;
        }
        else if((arr[i] + arr[j]) < key){
            j--;
        }
        else{
            cout<<arr[i]<<"and"<<arr[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}

/*
op: 1 and 6
    2 and 5
    3 and 4
*/