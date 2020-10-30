#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Student{
    public:
        string firstname;
        string lastname;
        string rollno;

        Student(string f, string l, string no){
            firstname = f;
            lastname = l;
            rollno = no;
        }

    bool operator==(const Student &s) const{
        return rollno == s.rollno?true:false;
    }
};

class Hashfucn{
    public:
        size_t operator()(const Student &s) const{
            return s.firstname.length() + s.lastname.length();
        }
};

int main(){

    unordered_map<Student, int, Hashfucn>student_map;

    Student s1("anjali", "pushkar", "05");
    Student s2("ashu", "gupta", "34");
    Student s3("rashi", "kumar", "56");
    Student s4("sonu", "raj", "10");

    //add student marks to hashmap
    student_map[s1] = 100;
    student_map[s2] = 129;
    student_map[s3] = 66;
    student_map[s4] = 22;

    //iterate over all the students
    for(auto s: student_map){
        cout<<s.first.firstname<<" "<<s.first.lastname<<"->"<<s.second<<endl;
    }

    return 0;
}

/*
Input
Apple

Output
sonu raj->22
rashi kumar->66
anjali pushkar->100
ashu gupta->129
*/

