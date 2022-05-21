#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=12;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<a<<endl;              //***12
    cout<<std::left;
    cout<<std::setw(7);
    cout<<a<<endl;              //12******
    return 0;
}