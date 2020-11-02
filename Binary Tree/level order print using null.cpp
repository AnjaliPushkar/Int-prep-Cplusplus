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

//in this approach we will put null character while storing in queue whenever there is change in level
//and while printing if get null character then there will be a line break i.e., next level
void bfs(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f == NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<" ";
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


int main() {
    node *root  = buildTree();
    bfs(root);
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