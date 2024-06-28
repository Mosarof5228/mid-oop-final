#include<iostream>
#include<cmath>
using namespace std;
int x=50;
int main(){
    int x=20;
    ::x=100;
    cout<<::x<<endl;



    return 0;
}