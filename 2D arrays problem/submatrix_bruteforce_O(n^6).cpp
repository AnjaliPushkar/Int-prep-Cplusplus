#include<iostream>
using namespace std;

void subarray(int n, int arr[][100]){
    int sum=0;
    //top left corner starting from 0,0
    for(int li=0; li<n; li++){
        for(int lj=0; lj<n; lj++){
            //bottom right starting from left corner
            for(int bi=li; bi<n; bi++){
                for(int bj=lj; bj<n; bj++){
                    //cell is from left to right corner
                    for(int i=li; i<=bi; i++){
                        for(int j=lj; j<=bj; j++){
                            //sum of submatrix
                            sum += arr[i][j];
                        }
                    }
                }
            }
        }
    }
cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    subarray(n, arr);
    return 0;
}

/*
ip: 2
    1 1
    1 1
op: 16
*/