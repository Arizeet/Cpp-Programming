#include<iostream>
using namespace std;
int global;
extern int global1;
int main()
{
    int local;
    cout<<local<<endl;  //undefined
    cout<<global<<endl;   //0
    cout<<global1;
    return 0;
}
int global1=10;