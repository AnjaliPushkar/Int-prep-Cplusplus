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

node* lca(node*root, int a, int b){
    if(root == NULL){
        return NULL;
    }
    if(root->data == a or root->data == b){
        return root;
    }
    node* leftans = lca(root->left, a,b);
    node* rightans = lca(root->right,a,b);
    if(leftans != NULL and rightans != NULL){
        return root;
    }
    if(leftans != NULL){
        return leftans;
    }
    return rightans;


}

int main() {
    node *root  = buildTree();
    int a=7; int b =9;
    cout<<lca(root,4,7)->data;
    return 0;
}
/*
Input
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
Output
7
*/