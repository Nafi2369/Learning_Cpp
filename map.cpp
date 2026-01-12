#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    string s; cin >> s;
    map<char,int> mp;

    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    for(int i=0; i<s.size(); i++){
        if(s[i]==1)
        {
            cout << s[i];
        }
    }

    return 0;
}