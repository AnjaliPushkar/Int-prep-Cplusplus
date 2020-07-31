/*all the no. are present twice, except two no.
Find them in linear time without using extra space in ascending order.
ex: arr = 1,1,2,7,5,2,5,3
op: 3,7*/ 


#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int arr[1000];
    int res= 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        res = arr[i]^res;
    }
    int temp = res;
    int pos=0;
    while((temp&1) != 1){
        pos++;
        temp = temp>>1;
    }

    //first bit in xor is at position 'pos'
    int mask = 1<<pos;
    
    //find those no which contain set bit at position 'pos'
    int x=0;
    int y=0;
    for(int i=0; i<n; i++){
        if((arr[i]&mask) > 0){
            x = x^arr[i];
        }
    }
    y = x^res;
    cout<<min(x,y)<<","<<max(x,y);
    return 0;
}
