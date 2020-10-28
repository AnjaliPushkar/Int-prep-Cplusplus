#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node *left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
}; 

node *buildTree(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}


class HBPair{
    public:
        int height;
        bool balance;
};

HBPair isBalance(node*root){
    HBPair p;
    if(root == NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }
    HBPair left = isBalance(root->left);
    HBPair right = isBalance(root->right);
    p.height = max(left.height, right.height) + 1;
    if(abs(left.height - right.height) <= 1 and left.balance and right.balance){
        p.balance = true;
    }
    else{
        p.balance = false;
    }
    return p;
}

int main() {
    node *root  = buildTree();

    if(isBalance(root).balance){
        cout<<"Tree is balance";
    }
    else{
        cout<<"Tree is not balance";
    }
    return 0;
}
/*
Input
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
Output
Tree is not balance
*/