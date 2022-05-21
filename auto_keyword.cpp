#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a=10;
    auto b=3.14;
    cout<<a<<"\n"<<b<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name();
    return 0;
}