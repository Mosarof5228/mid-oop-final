#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z){
        brand=x;
        model=y;
        year=z;

    };
    void display(){
        cout<<brand<<" "<<model<<" "<<year<<endl;
    }
};
int main()
{
    Car Honda("FZS","V2",2023);
    Honda.display();


    return 0;
}