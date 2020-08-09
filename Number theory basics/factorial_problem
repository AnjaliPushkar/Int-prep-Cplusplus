//you are given n and k. find the max value of x such that (n! % k^x) = 0
#include <iostream>
using namespace std;
#define INT_MAX 100000000

int main() {
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        int ans = INT_MAX;
        int occ=0;

    //n!/k^x => (p1^c1.p2^c2--)/(p1^k1x.p2^k2x----)
    //=> x=c1/k1 + c2/k2---  
        for(int i=2; i*i<=k; i++){
            if(k%i == 0){
                occ = 0;
                //finding factors of k
                while(k%i==0){
                    occ++;//powers k1,k2--
                    k = k/i;
                }
                //find out powers of i in n!
                int cnt=0; //c1,c2---
                long long p = i;
                while(p<=n){
                    cnt += n/p;
                    p=p*i;
                }
                ans = min(ans, cnt/occ);
            }
        }
        //when prime factor is left
        if(k>1){
            int cnt=0;
            int p=k;
            while(p<=n){
                cnt += n/p;
                p*=k;
            }
            ans = min(ans, cnt);
        } 
        if(ans == INT_MAX){
            ans= 0;
        }
        cout<<ans<<endl;
     }
        return 0;
    
}
/*ip: 3
5 2
1000 2
5 7
op: 3
994
0
*/