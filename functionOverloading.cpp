#include<iostream>
using namespace std;
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
