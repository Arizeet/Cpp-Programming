// Function, loop and conditional statement create a new scope
// The outer scope variables are accessible in inner scope but vice versa
// is not true
// We can create a new scope by using a pair of curly brackets
#include<iostream>
using namespace std;
int x=20;
int main()
{
    int x=10;
    {
        int x=30;
        cout<<x;
    }
    
    return 0;
}