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

    }
        void TypeofTriangle(){
            if(side1==side2 && side2==side3){
                cout<<"Type of triandle is Equalateral"<<endl;
            }
            else if(side1==side2 || side1==side3 || side2==side3){
                cout<<"Type of triandle is Isosceles"<<endl;
            }else{
                cout<<"Type of triandle is Scalene"<<endl;
            }
        }


};
int main(){
    double s1,s2,s3;
    
    cout<<"side1: ";
    cin>>s1;
    cout<<"side2: ";
    cin>>s2;
    cout<<"side3: ";
    cin>>s3;
    Triangle obj(s1,s2,s3);
   obj.TypeofTriangle();


};