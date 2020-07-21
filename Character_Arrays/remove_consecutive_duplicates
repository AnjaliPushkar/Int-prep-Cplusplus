//ip : ccoooddddding then op : coding

#include <iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char arr[]){
    int l = strlen(arr);
    
    if(l ==0 or l==1){
        return ;
    }
    int prev = 0;
    for(int current=1; current<l; current++){
        if(arr[prev] != arr[current]){
            prev++;
            arr[prev] = arr[current];
        }
    }
    //end of loop and '\0' means null
    arr[prev + 1] = '\0'; 
    return;
}


int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    
    removeDuplicates(arr);
        cout<<arr<<endl;
    return 0;
}

