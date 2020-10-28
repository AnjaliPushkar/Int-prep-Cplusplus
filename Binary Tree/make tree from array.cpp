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


class HBPair{
    public:
        int height;
        bool balance;
};

node* buildTreeFromArray(int arr[], int s, int e){
    if(s>e){
        return NULL; 
    }
    int mid = (s+e)/2;
    node* root = new node(arr[mid]);
    root->left = buildTreeFromArray(arr, s, mid-1);
    root->right = buildTreeFromArray(arr, mid+1, e); 
    return root;
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
   int arr[] = {1,2,3,4,5,6,7};
   int n=7;
   node*root = buildTreeFromArray(arr,0,n-1);
        printTree(root);
}
/*
Output
4 
2 6 
1 3 5 7
*/