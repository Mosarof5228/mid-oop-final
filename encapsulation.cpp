#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        string price;
    public:
        void setValue(string x,string y){
            name=x;
            price=y;
        }
        string getValue(){
           return "Name: "+name+" And Price is: "+price;
        }

};
int main(){
    Student s1;
    s1.setValue("Mosarof Hossen","amar name");
    cout<<s1.getValue();

   

}