#include <iostream>
#include<algorithm>

using namespace std;

//compare in decreasing order
bool compare(int a, int b){
    return a>b;
}

int main()
{
    int a[] = {1,2,4,4,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
   
    //sorting an array using sort function, more efficient 
    sort(a, a+n, compare);
    for(int i=0; i<n; i++){
        cout<<a[i]<<",";
    }

    return 0;
}
