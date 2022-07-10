#include<iostream>
using namespace std;
int main()
{
    int num=2;
    while (1)
    {
        switch (num)
        {
        case 1:
            cout<<"One "<<endl;
            break;
        case 2:
            cout<<"Two "<<endl;
            exit(0);                    // exit(0) complete program successfully
            break;
        default:
            cout<<"Default "<<endl;
            break;
        }
    }
    
    return 0;
}