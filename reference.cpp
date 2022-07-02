#include<iostream>
int main()
{
    int x=10;
    int &y=x;
    std::cout<<y<<" ";
    x=x+5;
    std::cout<<y<<" ";
    y=y+5;
    std::cout<<x<<" ";

    return 0;
}