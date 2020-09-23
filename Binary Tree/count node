#include <iostream>
#include<algorithm>
#include<queue>
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

//complexity O(n)
int countNode(node*root){
    if(root == NULL){
        return 0;
    }
    return 1 + countNode(root->left) + countNode(root->right);
}

int sumNodeData(node*root){
    if(root == NULL){
        return 0;
    }
    return root->data + sumNodeData(root->left) + sumNodeData(root->right);
}


int main() {
    node *root  = buildTree();
    cout<<countNode(root)<<endl;
    cout<<sumNodeData(root);
    return 0;
}
/*
Input
3 4 -1 6 -1 -1 5 1 -1 -1 -1
Output
5
19
*/