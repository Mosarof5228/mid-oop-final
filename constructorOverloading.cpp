#include<iostream>
using namespace std;
class Car{
    public:
        string model;
        int price;
    Car(string x,int y){
        model=x;
        price=y;

    }

    Car(){
        cout<<"It is a default construnctor"<<endl;
    }
    void display(){
        cout<<model<<" "<<price<<endl;
    }

};
 int main(){
    Car obj;
    Car bike("V2", 50000);
    bike.display();


 }