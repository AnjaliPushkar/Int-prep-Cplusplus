/*
find good subarr i.e sum of subarr is divisible by N.
logic : using pigeonhall principle
5
1 3 2 6 4
how : 3+2, 6+4, 3+2+6+4 these %n == 0
*/

#include<iostream>
#include<cstring>
using namespace std;

#define ll long
ll arr[1000005], cumsum[10000005];

int main(){
    int n;
    cin>>n;
    //add header file cstring to include memoryset
    //since value of N is large, so have to use memset
    memset(cumsum, 0, sizeof(cumsum));
    cumsum[0] = 1;
    int sum =0 ;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
        sum = sum % n;
        sum = (sum+n) % n; //for -ve values
        cumsum[sum]++;
        }
    ll ans=0;
    for(int i=0;i<n; i++){
        int m = cumsum[i];
        ans += (m)*(m-1)/2; //nCr - binomial theorem 
    }
    cout<<ans;
    return 0;
}
