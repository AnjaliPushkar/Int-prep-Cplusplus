#include <iostream>
#include<cstring>
using namespace std;

//bool function return true or false
bool isPalindrome(char arr[]){
    int i = 0;
    int j = strlen(arr)-1;
    
    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[1000];
    //getline is used to read character array
    cin.getline(arr, 1000);
    
    if (isPalindrome(arr)){
        cout<<"Palindrome String";
    }
    else{
        cout<<"not a Palindrome";
    }

    return 0;
}