/*magical park problem in which you have to go out of the park
with atleast amount of energy(k). given matrix m*n.
ip:
. . * .
. # . . 
* * . .
. # * *
m=4, n=4, k=5, s=20
op: yes 13
conditions : . will reduce energy(s) by 2, 
* will increase by 5, # will jump to next row
s will reduce by one for each step except last col
k is min amount of energy needed 
s is given energy amount
*/


#include<iostream>
using namespace std;

void magicalPark(char arr[][100], int m, int n, int k, int s){
    
    bool success = true;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            char ch = arr[i][j];
            if(s<k){
                success = false;
                break;
            }
            else if( ch == '*'){
                s += 5;
            }
            else if( ch == '.'){
                s -= 2;
            }
            else{
                break;
            }
            if (j!= n-1){
                s -= 1;
            }
            
        }
    }
    if(success){
        cout<<"yes"<<endl;
        cout<<s<<endl;
    }
}

int main(){
    
    int m, n, k, s;
    cin>>m>>n>>k>>s;
    
    char arr[100][100];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    magicalPark(arr, m, n, k, s);
    return 0;
}
output :
