#include <iostream>
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

node *preOrder(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }
    node *root = new node(d);
    root->left = preOrder();
    root->right = preOrder();
    return root;
}

void print(node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int main() {
    node *root  = preOrder();
    print(root);
    return 0;
}
/*
Input
3 4 -1 6 -1 -1 5 1 -1 -1 -1
Output
3 4 6 5 1 
*/