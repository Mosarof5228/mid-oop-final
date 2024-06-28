#include<iostream>
#include<cmath>
using namespace std;
class Complex{
    private:
        int real,imag;
    public:
        Complex(int r=0,int i=0){
            real=r;
            imag=i;

        }
        void print(){
            cout<<real<<"+"<<imag<<endl;
        }

};
int main(){
    int x=5;
    int y=4;
    int z=x+y;
    cout<<"z value: "<<z<<endl;
    // Complex obj(5,6);
    // obj.print();

}