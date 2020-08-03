#include <iostream>
#include<vector>
using namespace std;

//prime no. from sieve method
vector<int> primesieve(int *p, int n){
    p[0]=p[1]=0;
    p[2] = 1;
    //assume all the no.s are prime
    for(int i=3; i<=n; i+=2){
        p[i] = 1;
    }

    for(int i=3; i<=n; i+=2){
        if(p[i]==1){
            //if not prime mark as 0
            for(int j=i*i; j<=n; j+=i){
                p[j] = 0;
            }
        }
    }
    //special case for 2
    vector<int> primes;
    primes.push_back(2);

    //storing prime no.s
    for(int i=3; i<=n; i+=2){
        if(p[i]==1){
            primes.push_back(i);
        }
    }
    return primes;
}

//start factorization
vector<int> factorize(int m, vector<int> &primes){
    vector<int>factors;
    //clear the vector first
    factors.clear();
    int i=0; 
    int p = primes[0];

    //if square of prime no is less than m(on factorization to be done)
    while(p*p<=m){
        if(m%p == 0){
            factors.push_back(p);
            while(m%p == 0){
                m=m/p;
            }
        }
        i++;
        p=primes[i];
    }
    if(m!=1){
        factors.push_back(m);
    }
    return factors;
}


int main() {
    int p[100000] = {0};
    vector <int> primes = primesieve(p, 1000);
    
    int q;
    cin>>q;
    while(q--){
        int no;
        cin>>no;
        vector<int> factors = factorize(no, primes);
        for(auto f: factors){
            cout<<f<<",";
        }
        cout<<endl;
    }
    return 0;
}
/*
ip:2
10
30
op:2,5,
2,3,5,
*/