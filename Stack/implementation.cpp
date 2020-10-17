#include<iostream>
#include<vector>
using namespace std;

class Stack{
    //making vector private so that no one can see
    private:
        vector<int>v;
    public:
    //for insertion with O(1)
        void push(int data){
            v.push_back(data);
        }
    //return if empty
        bool empty(){
            return v.size() == 0;
        }
    //to pop out or delete the element
        void pop(){
            if(!empty()){
                v.pop_back();
            }
        }
    //for top most element
        int top(){
            return v[v.size()-1];
        }
};

int main(){
    Stack s;
    for(int i=1; i<=5; i++){
        s.push(i*i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
/*
Output
25
16
9
4
1
*/