#include<iostream>
using namespace std;
class MyClass{
    public:
        int id;
        string name;
    private:
        int phone;
        string love;
    
};
int main(){
    MyClass Mosarof,Habib;
    Mosarof.id=500;
    Mosarof.name="Mosarof Hossen";
//privet members k class er baire access kora jabena;

    cout<<Mosarof.id <<" "<<Mosarof.name<<endl;

}