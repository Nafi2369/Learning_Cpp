#include<iostream>

using namespace std;

int main()
{
    string s("hello world",8);
    string t(s,3);         // cuts the first 3 indexes of the string s

    cout<< t;
    return 0;
}