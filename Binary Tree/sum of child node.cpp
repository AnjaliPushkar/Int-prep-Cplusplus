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

int height(node*root){
    if(root == NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) +1;

}

int replaceSum(node*root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL and root->right == NULL){
        return root->data;
    }
    int leftSum = replaceSum(root->left);
    int rightSum = replaceSum(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return temp + root->data;

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
    node *root  = buildTree();
    printTree(root);
    cout<<endl;
    replaceSum(root);
    printTree(root);
    return 0;
}
/*
Input
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
Output
8 
10 3 
1 6 14 
9 7 13 

63 
23 27 
1 16 13 
9 7 13 
*/