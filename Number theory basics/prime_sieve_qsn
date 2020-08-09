/*find prime no. from a to b(including a and b).
testcases can be 1000. so we have used cummalative sum to find*/

#include <iostream>
using namespace std;

//Generate an array containing prime no.
void primeSieve(int p[]){

    //first mark all prime no.s as prime 
    for(int i=3; i<1000; i+=2){
        p[i] = 1;
    }

    //Sieve
    for(int i=3; i<1000; i+=2){

        //if the current no. is not marked then it is prime
        if(p[i] == 1){

            //mark all the multiples of i as not prime
            for(int j = i*i; j<1000; j+= i){
                p[j] = 0;
            }
        }
    }
    //special case
    p[1] = p[0] = 0;
    p[2] = 1;
}

int main() {
    int p[100000] = {0};
    primeSieve(p);
    
    int cumSum[100000] = {0};
    for(int i=0; i<1000; i++){
       cumSum[i] = cumSum[i-1] + p[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a, b;
        cin>>a>>b;
        cout<<cumSum[b] - cumSum[a-1]<<endl;
    }
    return 0;
}
/* ip:2
1 5
11 20
op:
3 
4*/

