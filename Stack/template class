#include<iostream>
#include<vector>
using namespace std;

//creating template class for taking data with any kind of datatype
template<typename T>
class Stack{
    //making vector private so that no one can see
    private:
        vector<T>v;
    public:
    //for insertion with O(1)
        void push(T data){
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
        T top(){
            return v[v.size()-1];
        }
};

int main(){
    Stack<char> s;
    for(int i=65; i<=69; i++){
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
/*
Output

E
D
C
B
A
*/