#include <iostream>
using namespace std;

//Generate an array containing prime no.
void primeSieve(int p[], int n){

    //first mark all prime no.s as prime 
    for(int i=3; i<n; i+=2){
        p[i] = 1;
    }

    //Sieve
    for(int i=3; i<n; i+=2){

        //if the current no. is not marked then it is prime
        if(p[i] == 1){

            //mark all the multiples of i as not prime
            for(int j = i*i; j<n; j+= i){
                p[j] = 0;
            }
        }
    }
    //special case
    p[1] = p[0] = 0;
    p[2] = 1;
}

int main() {
    int p[100000];
    int n;
    cin>>n;
    primeSieve(p, n);
    for(int i=0; i<n; i++){
        if(p[i] == 1){
         cout<<i<<",";
        }
    }
    return 0;
}
