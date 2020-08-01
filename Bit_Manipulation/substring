/*finding subsequence/subsets of string
ip : abc 
op : " " a b ab c ac bc abc
*/

#include<iostream>
#include<cstring>
using namespace std;

void filterChar(int n, char arr[]){
    int j = 0;
    while(n>0){
        int last_bit = n&1;
        if(last_bit == 1){
            cout<<arr[j];
        }
        j++;
        n = n>>1;
    }
    cout<<endl;
}

void printSubsets(char arr[]){
    int n = strlen(arr);
    for(int i=0; i<(1<<n); i++){
        filterChar(i, arr);
    }
    return;
}

int main(){
    char arr[100];
    cin>>arr;
    printSubsets(arr);
    return 0;
}