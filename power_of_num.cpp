#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b,ans;
    cout<<"Enter a^b as a and b respectively: "<<endl;
    cin>>a>>b;
    ans=power(a,b);
    cout<<a<<"^"<<b<<" = "<<ans<<endl;
    return 0;
}