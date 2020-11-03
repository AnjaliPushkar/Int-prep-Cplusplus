#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node *prev;
        node(int d){
            data = d;
            next = NULL;
            prev = NULL;
        }
};

void insertAtHead(node *&head, int d){
    node *n = new node(d);
    node *temp = head;
    n->next = head;
    if(temp != NULL){
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next  = n;
    }
    else{
        n->next = n;
    }
    head = n;
}

void print(node *&head){
    node *temp = head;
    while(temp->next != head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

int main() {
    node *head =NULL;
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    cout<<endl;
    return 0;
}
/*
Output
1->2->5->6->9->8->
*/