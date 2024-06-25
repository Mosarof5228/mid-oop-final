#include<iostream>
using namespace std;
class Student{
    public: 
    int id;
    double gpa;
    void display(){
        cout<<id <<" "<<gpa<<endl;
    };
    Student(int x,double y){
        id=x;
        gpa=y;

    }

};
int main(){

    Student Mosarof(501,3.33);
    Mosarof.display();
    

}