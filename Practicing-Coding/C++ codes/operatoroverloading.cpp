#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0) {
            real = r;
            imag = i;
        }
        
        friend Complex operator+ (Complex const &c1, Complex const &c2) {
            return Complex(c1.real + c2.real, c1.imag + c2.imag);
        }
        
        void print() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
