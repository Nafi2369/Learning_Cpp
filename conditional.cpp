#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    std::string check = n%2==0 ? "even":"odd";
    std::cout<<""<<check;

    return 0;

}