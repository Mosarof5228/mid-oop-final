#include<iostream>
#include<cmath>
using namespace std;
class Triangle{
    private:
        double side1;
        double side2;
        double side3;
    public:
        Triangle(double x,double y,double z){
            side1=x;
            side2=y;
            side3=z;

        };
        void display(){
            if(side1==side2 && side1==side3 && side2==side3){
                cout<<"Equilateral Triangle"<<endl;
            }else if(side1==side2 || side1==side3 ||side2==side3){
                cout<<"Isoceles Trianlge"<<endl;
            }else{
                cout<<"Scalene Trianlge"<<endl;
            }
        }

};
int main(){
    double s1,s2,s3;
    cout<<"Input side1"<<endl;
    cin>>s1;
    cout<<"Input side2"<<endl;
    cin>>s2;
    cout<<"Input side3"<<endl;
    cin>>s3;
    Triangle obj1(s1,s2,s3);
    obj1.display();



}