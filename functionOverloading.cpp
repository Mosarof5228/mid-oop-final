#include<iostream>
using namespace std;
//function overloadin is a process of declearing multi function
//with the same name but parameter or data type must have to different;
void sum(int x,int y){
    int add=x+y;
    cout<<"Sum value is: "<<add<<endl;

}
void sum(int x,int y, int z){
    int add=x+y+z;
    cout<<"Sum2 value is: "<<add<<endl;

}
int main(){
    sum(10,10);
    sum(10,10,10);

};
