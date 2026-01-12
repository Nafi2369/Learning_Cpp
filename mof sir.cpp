#include<iostream>

using namespace std;

class Complex
{
    public:
        float real,imag;

    // Constructor
    Complex(float r=0,float i=0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(Complex c)
    {
        return Complex(real+c.real,imag+c.imag);
    }

    // Display function
    void display()
    {
        cout << real << " + j" << imag << endl;
    }
};

int main()
{
    Complex c1(2.5,3.5);
    Complex c2(1.6,2.7);
    Complex c3;

    c3 = c1 + c2;

    cout << "C1 = ";
    c1.display();
    cout << "C2 = ";
    c2.display();
    cout << "C3 = ";
    c3.display();

    return 0;
}