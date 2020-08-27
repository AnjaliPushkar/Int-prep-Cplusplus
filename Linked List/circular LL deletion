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

//finding node to be deleted
node *getnode(node*&head, int data){
    node *temp = head;
    while(temp->next != head){
        if(temp->data == data){
            return temp;
        }
    temp = temp->next;
    }
    if(temp->data == data){
        return temp;
    }
    return NULL;
}

void deleteNode(node *&head, int data){
    node *del = getnode(head, data);

    //if node is not present
    if(del == NULL){
        return;
    }

    //if deleted node is head node
    if(head == del){
        head = head->next;
    }

    //to connect the last node to the next of deleted node
    node *temp = head;
    while(temp->next != del){
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
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
    deleteNode(head, 6);
    print(head);
    deleteNode(head, 1);
    print(head);
    return 0;
}
/*
Output
1->2->5->6->9->8
1->2->5->9->8
2->5->9->8
*/