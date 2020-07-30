#include<iostream>
using namespace std;

void spiralPrint(int m, int n, int arr[][100]){
	int srow = 0;
	int scol =0;
	int erow = m-1;
	int ecol = n-1;
	while(srow<=erow and scol<=ecol){

		//first column
		for(int i=srow; i<=erow; i++){
			cout<<arr[i][scol]<<", ";
		}
		scol++;

		//last row
		if(srow<erow){
			for(int i=scol; i<=ecol; i++){
				cout<<arr[erow][i]<<", ";
			}
		erow--;
		}

		//last column
		if(scol<ecol){
			for(int i=erow; i>=srow; i--){
				cout<<arr[i][ecol]<<", ";
			}
			ecol--;
		}

		//first row
		for(int i=ecol; i>=scol; i--){
			cout<<arr[srow][i]<<", ";
		}
		srow++;
	}
	cout<<"END";
}

int main() {
	int m;
	int n;
	cin>>m>>n;
	int arr[100][100];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	spiralPrint(m,n,arr);
	return 0;
}
/*
ip:4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
op:11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
*/