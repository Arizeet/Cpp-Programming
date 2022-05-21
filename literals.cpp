#include<iostream>
using namespace std;
int main()
{
    int a = 20;     //decimal
    int b = 0x1A;   //hexadecimal
    int c = 016;    //octal
    int d = 0b11;   //binary
    unsigned int e=124u;
    long int f=124L;
    long long int g = 124LL;
    cout<<a<<"\n"
        <<b<<"\n"
        <<c<<"\n"
        <<d<<endl;
    cout<<e<<"\n"<<f<<"\n"<<g;
    return 0;
}