#include<iostream>
#include<cstdlib>

using namespace std;

class Result{
    protected:
        char oop;
        char dig_elec;
        char stat;
        char an_com;

        // Result()
        // {

        // }

        Result(char oop, char dig_elec, char stat, char an_com)
        {
            this->oop = oop;
            this->dig_elec = dig_elec;
            this->stat = stat;
            this->an_com = an_com;
        }
    
};

class Student : public Result{
    public:
        string name;
        int roll;
        double cgpa;

    // Student()
    // {

    // }

    Student(string name, int roll, char oop, char dig_elec, char stat, char an_com) : Result(oop, dig_elec, stat, an_com)
    {
        this->name = name;
        this->roll = roll;
    }

    int converter(char ch)
    {
        if(ch=='A')
            return 4;
        else if(ch=='B')
            return 3;
        else if(ch=='C')
            return 2;
        else if(ch=='D')
            return 1;
        else 
            return 0;
    }

    double get_cgpa()
    {
        double gp = converter(oop)+converter(dig_elec)+converter(stat)+converter(an_com);
        cgpa = (gp*3)/12;
        return cgpa;
    }

    void print_cgpa()
    {
        cgpa = get_cgpa();
        cout << cgpa << endl;
    }
};

void clearScreen() {
    #ifdef _WIN32
        std::system("cls");
    #else
        // Assume POSIX (Linux/macOS)
        std::system("clear");
    #endif
}

void print_menu()
{
    cout << "\t\t\t\t--//--Student Database--//--\n";
    cout << "1. Add new student\n";
    cout << "2. Remove a student\n";
    cout << "3. Search student\n";
}

Student init_student()
{
    string name;
    int roll;
    char oop;
    char dig_elec;
    char stat;
    char an_com;

    cout << "\t\t\t\t--//--Enter the info of the student--//--\n\n";
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll: ";
    cin >> roll;
    clearScreen();
    cout << "\t\t\t\t--//--Enter grades for each subject--//--\n\n";
    cout << "Object Oriented Programming: ";
    cin >> oop;
    cout << "Digital Electronics: ";
    cin >> dig_elec;
    cout << "Statistics: ";
    cin >> stat;
    cout << "Analog Communication: ";
    cin >> an_com;

    Student s1(name,roll,toupper(oop),toupper(dig_elec),toupper(stat),toupper(an_com));

    return s1;
}

int main()
{
    // print_menu();
    // system("pause");
    // int choice;
    // cin >> choice;

    // switch(choice)
    // {
    //     case 1:
    //         Student* s1 = new Student;
    //         s1 = init_student(); 
    //         break;
    //     case 2:
    //         Student ;
    // }
    // (*s1).print_cgpa(); 

    Student s1 = init_student();
    clearScreen();
    s1.print_cgpa();

    cout << "\nPress ENTER to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
