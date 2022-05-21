#include<iostream>
using namespace std;

const double PI= 3.14159;
//#define PI= 3.14159;

int main()
{
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area = "<<(PI*r*r);
    return 0;
}