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

int no_of_divisors(int m, vector<int> &primes){
   int i=0;
   int cnt=0;
   int p=primes[0];
   int ans =1;

    while(p*p<=m){
        if(m%p == 0){
            cnt=0;
            while(m%p == 0){
                cnt++;
                m=m/p;
            }
            ans = ans*(cnt+1);
        }
        i++;
        p=primes[i];
    }
    if(m!=1){
        ans = ans*2;
    }
    return ans;
}


int main() {
    int p[100000] = {0};
    for(int i=0; i<100000; i++){
        p[i] = 0;
    }
    vector<int> primes = primesieve(p, 1000);
    
    int q;
    cin>>q;
    while(q--){
        int no;
        cin>>no;
        int div = no_of_divisors(no, primes);
        cout<<div<<endl;
    }
    return 0;
}
/*ip:60
op:12
how:1,2,3,4,5,6,10,12,15,30,60 are the divisors of 60
*/