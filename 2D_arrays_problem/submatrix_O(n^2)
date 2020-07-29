#include <iostream>
using namespace std;

void submatrix(int n, int m, int arr[100][100]){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){

            //top left matrix contribution
            int tl=(i+1)*(j+1);

            //bottom right matrix contribution
            int br=(n-i)*(m-j);

            //sum of top left + bottom right to the cell at (i,j)
            sum += (tl*br)*arr[i][j];
        }
    }
cout<<sum;
}
int main() {
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
          }       
    }
    submatrix(n,n,arr);
    return 0;
}

/*
ip: 2 2
1 1
1 1

op: 16 
*/