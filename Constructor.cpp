#include<iostream>

using namespace std;

class users
{
    public:
    int id;
    int number;
    double balance;

    users(int i,int n,double b)
    {
        id = i;
        number = n;
        balance = b;
    }
};

int main()
{
    users nafee(23484,1724677082,590.51);
    
    users ouishi(23485,1724677083,1031.43);

    cout<<"Nafee's ID: "<<nafee.id<<", Number: "<<nafee.number<<", Balance: $"<<nafee.balance<<endl;
    cout<<"Ouishi's ID: "<<ouishi.id<<", Number: "<<ouishi.number<<", Balance: $"<<ouishi.balance<<endl;

    return 0;
}