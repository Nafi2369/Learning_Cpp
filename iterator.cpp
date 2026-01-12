#include<iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for(string::iterator i=s.begin(); i<s.end(); i++)  // string::iterator can be replaced with auto
    {
        if(*i==' ')
        {
            // s.erase(i,1);
            // i--;
            cout<< "space found" << endl;
        }
    }

    cout<< s << endl;
    return 0;
}