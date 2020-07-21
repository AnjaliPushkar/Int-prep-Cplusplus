#include <iostream>
#include<cstring>
using namespace std;

int main()
{
   int n;
   cin>>n;
   
   char arr[1000];
   char largestarr[1000];
   
   int len=0;
   int largestlen = 0;
   //cin.get is used bcz cin.getline() method consider first string as null
   cin.get(); 
    
   
   for(int i=0; i<n; i++){
       cin.getline(arr, 1000);
       len = strlen(arr);
       if(len > largestlen){
           largestlen = len;
           strcpy(largestarr, arr);
       }
   }
   cout<<largestarr<<" is largest string of size "<<largestlen<<endl;
    return 0;
}

//if the strings are of equal length then it will be compared on the bases of lexical order