#include <iostream>
#include<algorithm>
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

node *buldTree(){
    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buldTree();
    root->right = buldTree();
    return root;
}

int height(node*root){
    if(root == NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) +1;

}

void levelOrder(node*root, int k){
    if(root == NULL){
        return;
    }
    if(k == 1){
        cout<<root->data<<" ";
        return;
    }
    levelOrder(root->left, k-1);
    levelOrder(root->right, k-1);
    return;
}


void printTree(node *root){
    int h = height(root);
    for(int i=1; i<=h; i++){
        levelOrder(root, i);
        cout<<endl;
    }
    return;
}

int main() {
    node *root  = buldTree();
    printTree(root);
    return 0;
}
/*
Input
3 4 -1 6 -1 -1 5 1 -1 -1 -1
Output
3 
4 5 
6 1 
*/