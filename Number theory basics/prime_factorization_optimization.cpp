#include <iostream>
#include<vector>
using namespace std;

void factorise(int n){
    vector<pair <int, int>> factors;
    int cnt;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            //keep on dividing by i till divisable
            cnt = 0;
            while(n%i==0){
                cnt++;
                n = n/i;
            }
            factors.push_back(make_pair(i, cnt));
        }
    }
     if(n!=1){
        //whatever is left is prime no. itself
        factors.push_back(make_pair(n,1));
        }
    //print  the factors
    for(auto f: factors){
        cout<<f.first<<"^"<<f.second<<endl;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    factorise(n);
    return 0;
}
/*
ip: 132
op: 2^2
3^1
11^1
*/