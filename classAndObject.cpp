#include<iostream>
using namespace std;

class Student{
public:
int id;
double gpa;
};
int main(){

Student Alim;
Alim.id=101;
Alim.gpa=3.44;

cout<<"Id is: "<<Alim.id<<" "<<Alim.gpa<<endl;

Student Suparna;
Suparna.id=501;
Suparna.gpa=5.00;
cout<<"Id is: "<<Suparna.id<<" and gpa is: "<<Suparna.gpa;

    return 0;
}
