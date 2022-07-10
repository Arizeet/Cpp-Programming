#include<iostream>
using namespace std;

bool isEven(int num){
    //num & 1 = 1 for odd
    if (num&1){
        return 0;
    }
    return 1;    
}

int main()
{
    int n,ans;
    cout<<"Enter num: "<<endl;
    cin>>n;
    ans=isEven(n);
    if (ans==1){
        cout<<n<<" is Even"<<endl;
    }
    else
        cout<<n<<" is Odd"<<endl;
    return 0;
}