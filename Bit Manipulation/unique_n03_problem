/*given an array in which no. are present thrice except for one no. which is only preent once.
find using bitwiseoperation in minimum space.
ex: 1 1 1 2 2 2 3   op: 3 
*/ 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no;

    //array of fixed size, space complexity O(1)
    int cnt[64]={0};
    for(int i=0; i<n; i++){
        cin>>no;

        //update the cnt array by extractiong bits
        int j=0;
        while(no>0){
            int last_bit = no&1;
            cnt[j] += last_bit;
            j++;
            no = no>>1;
        }
    }

    //iterate over the array and from the ans by converting 0s ans 1s into a no.
    int p = 1;
    int ans = 0;
    for(int i=0; i<64; i++){
        cnt[i] = cnt[i]%3;
        ans += cnt[i]*p;
        p = p*2;
    }

    //print the final ans
    cout<<ans;
    return 0;
}