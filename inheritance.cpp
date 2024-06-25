#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    void display1(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student:public Person{
    public:
        int id;
        void display2(){
            cout<<"Id: "<<id <<endl;
            display1();
        }
};



int main(){
    Student s1;
    s1.name="Mosarof";
    s1.age=25;
    s1.id=501;
    s1.display2();


}