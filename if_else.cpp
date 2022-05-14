#include<iostream>
using namespace std;
int main()
{
    int saving;
    cout<<"Enter ur saving: ";
    cin>>saving;
    if (saving>=5000)
    {
        if (saving>=10000)
        {
            cout<<"Exclusive Plane";
        }
        else
            cout<<"Plane";
    }
    else if (saving<5000 && saving>=1000)
    {
        if (saving>=3000)
        {
            cout<<"Rajdhani Express";
        }
        else
            cout<<"Delhi Express";
    }
    else
        cout<<"Don't go.!!";
    return 0;
}