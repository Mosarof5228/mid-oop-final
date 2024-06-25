#include<iostream>
#include<cmath>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;
    public:
    Rectangle(double x,double y){
        length=x;
        width=y;

    }
    double rectangleArea(){
        return length*width;
    }
    double rectanglePerimiter(){
        return 2*(length+width);
    }

};
int main(){
   
    
    double length,width;
    
    cout<<"input length and width"<<endl;
    cin>>length>>width;
     Rectangle obj(length,width);
   cout<<"rectangle Area: "<<obj.rectangleArea()<<endl;
   cout<<"rectangle Perimiter: "<<obj.rectanglePerimiter()<<endl;
    

}