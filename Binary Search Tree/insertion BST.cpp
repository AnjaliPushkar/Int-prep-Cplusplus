#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

//accepts the old root node & data and returns new root node
node* insertInBST(node*root, int data){
    if(root == NULL){
        return new node(data);
    }
    //recursive base case: insert in subtree and update the pointers
    if(data <= root->data){
        root->left = insertInBST(root->left, data);
    }
    else{
        root->right = insertInBST(root->right, data);
    }
    return root;
}

node* build(){
    //read input till -1 & will be inserted into BST

    int d;
    cin>>d;
    node*root = NULL;

    while(d!=-1){
        root = insertInBST(root, d);
        cin>>d;
    }
    return root;
}

void bfs(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}

void InOrder(node*root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<",";
    InOrder(root->right);
}

int main() {
    node*root = build();
    InOrder(root);
    cout<<endl;
    bfs(root);
    return 0;
}

/*
Input
5 3 7 1 6 8 -1
Output
1,3,5,6,7,8,
5,
3,7,
1,6,8,
*/