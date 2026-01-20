#include<iostream>

using namespace std;

class Person{
    int ssn;

    public:
        string name;
        int age;

    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }
    
    void get_ssn(int ssn)
    {
        this->ssn = ssn;
    }

    void print_ssn()
    {
        cout << ssn << endl;
    }
};

class Businessman : public Person{
    float savings;

    public:
        int tin_no;
        double earning;
        int password = 2407;

        Businessman(string name, int age, int tin_no, double earning) : Person(name, age)
        {
            this->tin_no = tin_no;
            this->earning = earning;
        }

        void get_savings(float savings)
        {
            this->savings = savings;
        }

        void print_savings()
        {
            cout << savings << endl;
        }

        void print_all_info()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Business Tin: " << tin_no << endl;
            cout << "Monthly Earning: " << earning << endl; 
        }

        void print_private_infos()
        {
            while(1)
            {
                cout << "Enter Password: ";
                int pass;
                cin >> pass;
                if(pass == password)
                {
                    print_ssn();
                    print_savings();
                    break;
                }
                else
                {
                    cout << "Invalid Password" << endl;
                }   
            }
        }
};

int main()
{
    Businessman b1("Mahmud",28,239812,75000);

    b1.get_ssn(251789);

    b1.get_savings(1279123.58);

    b1.print_all_info();
    // system("cls");
    b1.print_private_infos();
    return 0;
}