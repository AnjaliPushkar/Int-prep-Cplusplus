#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    //pair
    pair<int, char>p;
    p.first = 10;
    p.second = 'b';

    //Another way
    pair<int, char>p2(p);
    cout<<p2.first<<endl; //10
    cout<<p2.second<<endl;  //b

    pair<int, string> p3 = make_pair(100, "Audi");
    cout<<p3.first<<", "<<p3.second<<endl; //100, Audi

    //take input
    int a,b;
    cin>>a>>b;

    pair<int, int> p4 = make_pair(a,b);
    //array of pairs
    //vector of pairs
    pair<pair<int, int>, string>car;
    car.second = "Audi";
    car.first.first = 10;
    car.first.second = 20;
    cout<<car.first.first<<", "<<car.first.second; //10,20

   
    // int arr[] = {1,2,3,4,5};
    // reverse(arr, arr+4);
    // int n = sizeof(arr)/sizeof(int);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<","; //4,3,2,1,5
    // }


    return 0;
}
