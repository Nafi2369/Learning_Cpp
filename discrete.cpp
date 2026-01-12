#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int arr[4]={1,2,3,4};

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[j]%arr[i]==0)
            {
                cout<< "1 ";
            }
            else
            {
                cout<< "0 ";
            }
        }
        cout<< endl;
    }
    return 0;
}