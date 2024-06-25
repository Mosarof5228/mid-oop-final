#include<iostream>
using namespace std;
//function overriding means funtion name and parameter will be same but execution or internal output of funtion will be differeent;

class Person{
    public:
        void display(){
            cout<<"I am a person"<<endl;
        }

};

class Student:public Person{
    public:
        void display(){
            cout<<"I am a student"<<endl;
        }
};

class Teacher:public Person{
    public:
        void display(){
            cout<<"I am a teacher"<<endl;
        }

};
int main(){

    Person p;
    p.display();

    Student s;

    s.display();

    Teacher t;
    t.display();

}