#include<iostream>
#include<cmath>
double const PI=3.1416;
using namespace std;
class Circle{
    private:
        double radius;
    public:
        Circle(double r){
            radius=r;
        }
        double calculateArea(){
            return PI*radius*radius;
            
        }

        double calculateCircumferance(){
            return 2*PI*radius;
        }

};
int main(){
    double radius;
    cout<<"please input a value";
    cin>>radius;
    Circle obj(radius);
    cout<<obj.calculateArea()<<endl;
    cout<<obj.calculateCircumferance()<<endl;


}