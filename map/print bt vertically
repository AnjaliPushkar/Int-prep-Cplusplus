/* we have to find vertical order of binary tree i.e.,
from root we will calculate distance of every node,
for left node distance-- and for right distance++
those are at same distance will come together
 */
#include <iostream>
#include<map>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node*left;//left node of binary tree
        node*right;//right node of binary tree

        node(int d){
            data = d;
            left = right = NULL;
        }
};

//pass it by reference
void verticalOrder(node*root, int d, map<int, vector<int>>&m){
    if(root==NULL){
        return;
    }
    m[d].push_back(root->data);
    verticalOrder(root->left, d-1, m);//if left node thn distance--
    verticalOrder(root->right, d+1, m);//if right node thn distance++
    return;
}

int main() {
    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->left->left->left = new node(9);
    root->left->right->right = new node(8);

    map<int, vector<int>>m;
    int d=0;
    verticalOrder(root,d,m);

    for(auto p:m){
        cout<<p.first<<"->";
        for(int x:p.second){
            cout<<x<<", ";
        }
        cout<<endl;
    }

    return 0;
}

/*
Output
-3->9, // distance -> nodes 
-2->4, 
-1->2, 
0->1, 5, 6, 
1->8, 3, 
2->7, 
*/