#include<iostream>
#include<cmath>
using namespace std;
double const pi=3.1416;
class Circle{
    private:
        double radius;
public:
    Circle(double r){
        radius=r;

    };
    double calculateCircleArea(){
        return pi*radius*radius;

    }
    double calculateCircumference(){
        return 2*pi*radius;
    }

};
int main(){
    double radius;
    cout<<"Input the radius of the circle: ";
    cin>>radius;
    Circle obj(radius);
    cout<<"Circle Area is: "<<obj.calculateCircleArea()<<endl;
    cout<<"Circle Circumference is: "<<obj.calculateCircumference()<<endl;


}