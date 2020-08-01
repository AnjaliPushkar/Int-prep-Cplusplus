/*given no. of pages in n books and m students.
books are arranged in ascending order of no. of pages.
task is to assign books such that max no. of pages assigned to student is minimum.*/

#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int book[], int n, int st, int mid){
    int students = 1;
    int pages = 0;
    for(int i=0; i<n; i++){
        if(pages + book[i] > mid){
            students ++;
            pages = book[i];
            if(students>st){
                return false;
            }
        }
        else{
            pages += book[i];
        }
    }
    return true;
}

int findpages(int book[], int n, int st){
    int start = book[n-1];
    int end = 10+20+30+40;
    int ans = INT_MAX;
    while(start<=end){
        int mid = (start+end)/2;
        if(isPossible(book, n, st, mid)){
            ans = min(ans, mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int book[]={10, 20, 30, 40};
    int n = 4;
    int st = 2;
    
    cout<<findpages(book,n,st);
    return 0;
}
op:60