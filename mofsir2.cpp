#include<iostream>

using namespace std;

class Space
{
    public:
        int x,y,z;

    //Constructor
    Space(int a=0, int b=0, int c=0)
    {
        x = a;
        y = b;
        z = c;
    }

    // Overload unary minus(-)
    void operator -()
    {
        x = -x;
        y = -y;
        z = -z;
    }

    //display values
    void display()
    {
        cout << "x = " << x << "y = " << y << "z = " << z << endl;
    }
};

int main()
{
    Space s(10,-20,30);
    
    cout << "Before applying -operator: " << endl;
    s.display();

    -s; // unary minus operator called

    cout << "After applying -operator: " << endl;
    s.display();

    return 0;
}