#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10,z=15;
    bool p=(x>10)&&(x++);   //1st exp is false so && is false so no need to evaluate
    bool q=(x==5)||(y++);   //1st exp is true so || is true so no need to evaluate
    bool r=(x==4)||(z++);   //1st exp is false, so 2nd exp of || must b evaluated
    cout<<p<<"\n"<<x<<endl;
    cout<<q<<"\n"<<y<<endl;
    cout<<r<<"\n"<<z<<endl;
    return 0;
}