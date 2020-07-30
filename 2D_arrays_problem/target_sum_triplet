#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin>>N;
	int arr[1000];
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	int T;
	cin>>T;
	
	//sort array firstly
	sort(arr, arr+N);

	  for(int i=0;i<N-2;i++)   
    {
        for(int j=i+1;j<N-1;j++)  
        {
            for(int k=j+1;k<N;k++)
            {
                if((arr[i]+arr[j]+arr[k])==T)
                {
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                }
            }
        }
    }
	return 0;
}

/* ip:9
5 7 9 1 2 4 6 8 3
10
op:1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
*/