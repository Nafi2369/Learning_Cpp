#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int Anton=0,Danik=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            Anton++;
        }
        else{
            Danik++;
        }
    }
    if(Anton>Danik){
       cout<<"Anton";
    }
    else if(Anton==Danik){
       cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}