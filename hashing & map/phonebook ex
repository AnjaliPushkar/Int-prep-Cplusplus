#include <iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){
    unordered_map<string, vector<string>>Phonebook;

    Phonebook["rahul"].push_back("9110");
    Phonebook["rahul"].push_back("9111");
    Phonebook["rahul"].push_back("9112");
    Phonebook["rahul"].push_back("9113");
    Phonebook["kajal"].push_back("9114");
    Phonebook["kajal"].push_back("9115");
    Phonebook["kajal"].push_back("9116");
    Phonebook["kajal"].push_back("9117");

    for(auto p:Phonebook){
        cout<<p.first<<" : ";
        for(auto s: p.second){
            cout<<s<<", ";
        }
        cout<<endl;
    }

}
/*
Output
kajal : 9114, 9115, 9116, 9117, 
rahul : 9110, 9111, 9112, 9113, 
*/