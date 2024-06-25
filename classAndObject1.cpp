#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    double gpa;
    void display(){
cout<<"Mosarof id is: "<< id <<" And gpa is: "<< gpa<<endl;
    }

};
int main(){
    Student Mosarof,Alim,Lima;
    Mosarof.id=501;
    Mosarof.gpa=5.00;
    Alim.id=502;
    Alim.gpa=3.33;
    Mosarof.display();
    Alim.display();
    
    
    
};