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

node *postOrder(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }
    node *root = new node(d);
    root->left = postOrder();
    root->right = postOrder();
    return root;
}

void print(node *root){
    if(root == NULL){
        return;
    }
    print(root->left);
    print(root->right);
    cout<<root->data<<" ";
}

int main() {
    node *root  = postOrder();
    print(root);
    return 0;
}
/*
Input
3 4 7 -1 -1 6 -1 -1 5 1 -1 -1 8 -1 -1
Output
7 6 4 1 8 5 3  
*/