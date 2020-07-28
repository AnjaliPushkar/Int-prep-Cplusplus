#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);

    //rotate array from arr+2 i.e. 3rd index
    rotate(arr,arr+2,arr+n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<","; //30,40,50,10,20
    }
    cout<<endl;

    //Applying thesame on vector
    vector<int>v{10,20,30,40,50};
    rotate(v.begin(), v.begin()+3, v.end());
    for(int i=0; i<v.size(); i++){
        cout<<arr[i]<<","; //30,40,50,10,20
    }
    cout<<endl;

    /*next_permutation() function is used to reorder the elements
     in the range [first, last) into the next lexicographically greater 
    permutation. A permutation is specified as each of several possible ways 
    in which a set or number of things can be ordered or arranged.*/
    next_permutation(v.begin(), v.end());
    for(int x:v){
        cout<<x<<","; //40,50,10,30,20
    }
    return 0;
}
