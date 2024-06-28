


#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    // Constructor to initialize real and imag
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Method to print complex number
    void print() {
        cout << real << "+" << imag << "i" << endl;
    }

    // Operator overloading for +
    Complex operator +( Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(5, 4);
    Complex c2(2, 3);
    Complex c3(1, 1);
    Complex c4;

    c4 = c1 + c2 + c3;
    c4.print();

    return 0;
}
