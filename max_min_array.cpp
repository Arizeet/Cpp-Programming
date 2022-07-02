#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>> array[i];
    }
    int maxNo=INT_MIN;  //array[0]
    int minNo=INT_MAX; 
    for (int i = 0; i < n; i++)
    {
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<"max= "<<maxNo<<" min= "<<minNo;
    return 0;
}