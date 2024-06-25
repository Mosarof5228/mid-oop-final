#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    double gpa;
    void setValue(int x,double y){
        id=x;
        gpa=y;
    };
    void display(){
        cout<<"Id Is: "<< id<<" And Gpa is: "<< gpa<<endl;
    }
};


int main(){
Student Mosarof,Sarmin,Rana;
Mosarof.setValue(500,3.44);
Mosarof.display();

Rana.setValue(501,5.00);
Rana.display();

}