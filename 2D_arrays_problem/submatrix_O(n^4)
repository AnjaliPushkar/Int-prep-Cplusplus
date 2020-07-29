#include <iostream>
using namespace std;

void submatrix(int n, int m, long long int a[][100]){
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            a[i][j]+=a[i][j-1];
        }
    }
    for(int j=0;j<m;j++){
        for(int i=1;i<n;i++){
            a[i][j]+=a[i-1][j];
        }
    }
   
    long long int sum=0;
    
    //top left corner starting from 0,0
    for(int li=0;li<n;li++){
        for(int lj=0;lj<m;lj++){

            //bottom right starting from left corner 
            for(int bi=li;bi<n;bi++){
                for(int bj=lj;bj<m;bj++){

                    //adding cells from top to bottom
                    sum+=a[bi][bj];
                    
                    //subtracting extra rows
                    if(li>0)
                        sum-=a[li-1][bj];

                    //subtracting extra cols
                    if(lj>0)
                        sum-=a[bi][lj-1];

                    //adding those cells which subtract twice
                    if(li>0 && lj>0)
                        sum+=a[li-1][lj-1];
                }
            }
        }
    }

    cout<<sum;
}

int main() {
    int n,m;
    cin>>n>>m;
    long long int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    submatrix(n,m,a);
    return 0;
}
    
/*
ip: 2 2
1 1
1 1

op: 16 
*/