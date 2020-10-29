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

node* createTreefromInPreOrder(int inorder[], int preorder[], int s, int e){
    //static variable can only initialized at ince
    static int i=0;
    if(s>e){
        return NULL;
    }
    node *root = new node(preorder[i]);
    int index = -1;
    for(int j=s; j<=e; j++){
        if(inorder[j] == preorder[i]){
            index = j;
            break;
        }
    }
    i++;
    root->left = createTreefromInPreOrder(inorder, preorder, s, index-1);
    root->right = createTreefromInPreOrder(inorder, preorder, index+1, e);
    return root;
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
   int inorder[] = {3,2,8,4,1,6,7,5};
   int preorder[] = {1,2,3,4,8,5,6,7};
   int n=sizeof(inorder)/sizeof(int);
   node*root = createTreefromInPreOrder(inorder, preorder, 0, n-1);
        printTree(root);
}
/*
Output
1 
2 5 
3 4 6 
8 7 
*/