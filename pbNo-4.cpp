#include<iostream>
#include<cmath>
using namespace std;
class Student{
private:
    string name;
    string className;
    int rollNumber;
    double marks;
public:
    Student(string name,string className,int rollNumber,double marks){
        this->name=name;
        this->className=className;
        this->rollNumber=rollNumber;
        this->marks=marks;

    }
    void display(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Class Name: "<<className<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        if(marks>=80){
            cout<<"A+"<<endl;
        }else if(marks>=70){
            cout<<"A"<<endl;
        }else if(marks>=60){
            cout<<"A-"<<endl;
        }else {
            cout<<"Fail"<<endl;
        }
    }
};
int main(){
    Student obj1("Mosarof","vii",501,72);
    obj1.display();

}