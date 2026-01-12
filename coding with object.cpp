#include<iostream>
#include<algorithm>

using namespace std;

class set
{
    int m,n;

    public:
    void input(void);
    void display(void);
    int largest(void);
};

int set::largest(void)
{
    // if(m>=n)
    // return (m);
    // else
    // return (n); 
    
    return (max(m,n));
}

void set::input(void)
{
    cout<<"Enter values of m & n: ";
    cin>> m >> n;
}

void set:: display(void)
{
    cout<<"Largest value is : " << largest() << endl;
}

int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}