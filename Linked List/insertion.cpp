#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
    //constructor
        node(int d){
            data = d;
            next = NULL;
        }
};

//passing a pointer by reference 
//if passes by value thn only copied value will be changed not original 
void insertAtHead(node *&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head= n;
}

//length of linked list
int length(node *head){
    int cnt=0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

//insertion at the end
void insertAtTail(node *&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(d);
    return;
}

//insertion at the middle after p steps
void insertAtMiddle(node *&head, int d, int p){
    if(head == NULL or p==0){
        insertAtHead(head, d);
        return;
    }
    else if(p>length(head)){
        insertAtTail(head, d);
    }
    else{
        int jump = 1;
        node *temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        node *n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node *head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 1);
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    print(head);
    cout<<endl;
    insertAtMiddle(head, 5,3);
    insertAtMiddle(head, 7,4);
    insertAtTail(head, 100);
    print(head);
    return 0;
}
/*
Output
9 -> 10 -> 1 -> 4 -> 3 -> 
9 -> 10 -> 1 -> 5 -> 7 -> 4 -> 3 -> 100 -> 
*/