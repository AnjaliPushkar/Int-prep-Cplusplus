/*calculate the notes from the given amount
168 = 100*1 + 50*1 + 10*1 + 5*1 + 2*1 + 1*1
total notes = 100,50,10,5,2,1
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a<=b;
}

int main(){
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(int);
    int money = 168;
    while(money>0){
        auto lb = lower_bound(coins, coins+n,money, compare)-coins-1;
        int m = coins[lb];
        cout<<m<<",";
        money = money - m;
    }
    return 0;
}
