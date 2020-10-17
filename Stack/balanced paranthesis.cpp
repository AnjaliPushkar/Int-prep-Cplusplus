#include<iostream>
#include<stack>
using namespace std;

bool isValidExpression(char *s){
    stack<char> st;

    for(int i=0; s[i]!='\0'; i++){
        char ch = s[i];
        if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){
            if(st.empty() or st.top() == '('){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    char s[100] = "((a+b)(a-b))";
    if(isValidExpression){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
/*
Output
yes
*/