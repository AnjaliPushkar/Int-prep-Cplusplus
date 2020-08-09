/*find prime no btw m and n for large value
1<=m<=n<=10^9, n-m = 10^5
*/
#include<iostream>
#include<vector>
using namespace std;

const int n = 100000;
vector<int> primes; //store only prime no
int p[n] = {0}; //store all marked unmarked no

void sieve(){
    for(int i=2; i<=n; i++){
        if(p[i]==0){
            //store i in primes vector
            primes.push_back(i);
            for(int j = i; j<=n; j+=i){
                //mark all multiples of i as not prime
                p[j] == 1;
            }
        }
    }
}

int main(){
    sieve();  //built only once for all

    int n, m;
    cin>>m>>n;
    
    bool segment[n-m+1];
    for(int i=0; i<n-m+1; i++){
        segment[i] = 0;
    }
    for(auto x: primes){
        
        if(x*x > n){
            break;
        }

        //start variable is for start marking from the given starting range 
        int start = (m/x)*x;

        //prime no lies in segmented sieve range(overlapping btw both arrays )
        if(x >= m and x<=n){
            start  = x*2;
        }
        //mark all multiples from given range
        for(int i=start;i<=n; i+=x){
            segment[i-m] = 1;
        }
    }
    for(int i=m; i<=n; i++){
        if(segment[i-m] == 0 and i!=1){
            cout<<i<<",";
        }
    }
    cout<<endl;
    return 0;
}
/*
ip: 150 200
op: 151,157,163,167,173,179,181,191,193,197,199,
*/
