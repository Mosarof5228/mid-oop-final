#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        
    public:
        void setValue(string x){
            name=x;

        };
        string getValue(){
            return "Name  : "+name+" wow";
        }

};
int main(){
    Student obj1;
    obj1.setValue("Mosarof Hossain");
    cout<<obj1.getValue();

}