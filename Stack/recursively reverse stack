#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(data);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
//pop out the top element and insert it at the bottom of smallest reversed stack
    int x = s.top();
    s.pop();

    //recursively reverse the stack
    reverseStack(s);
    insertAtBottom(s,x);
  
}

int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
/*
Output
1 2 3 4 
*/