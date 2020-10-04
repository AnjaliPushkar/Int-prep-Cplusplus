//implement a hashmap using separate chaining technique
#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Node{
public:
    string key;
    T value;
    Node<T>*next;

    Node(string key, T value){
        this->key = key;
        T val = value;
        next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    Node<T>**table; //pointer to an arrays of pointer
    int table_size;
    int current_size;
    
    int hashfucn(string key){
        int idx =0;
        int p =1;
        for(int j=0; j<key.length(); j++){
            idx = idx + (key[j]*p)%table_size;
            idx = idx%table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }

public:
    Hashtable(int ts=7){
        table_size = 7;
        table = new Node<T>*[table_size];
        current_size = 0;
        for(int i=0; i<table_size; i++){
            table[i] = NULL;
        }
    }
    void insert(string key, T value){
        int idx = hashfucn(key);
        Node<T>*n = new Node<T>(key, value);
        //insert at the head of linked list with id = idx
        n->next = table[idx];
        table[idx] = n;
        current_size++;
    }

    void print(){
        for(int i=0; i<table_size; i++){
            cout<<"Bucket"<<i<<"->";
            Node<T>*temp = table[i];
            while(temp != NULL){
                cout<<temp->key<<"->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

 
};

int main(){
    Hashtable<int>price_menu;
    price_menu.insert("burger",120);
    price_menu.insert("pepsi",20);
    price_menu.insert("lays",70);
    price_menu.insert("kurkure",90);
    price_menu.insert("oyes",66);

    price_menu.print();
}

/*
Output
Bucket0->burger->
Bucket1->pepsi->
Bucket2->
Bucket3->kurkure->lays->
Bucket4->oyes->
Bucket5->
Bucket6->
*/
//since there is a collision at bucket 3,we'll use rehashing