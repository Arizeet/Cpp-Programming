#include<iostream>
using namespace std;
long long int floorSqrt(long long x){
    if (x==1){
        return 1;
    }
    long long l=0, h=x/2, ans;
    while (l<=h){
        long long mid=l+(h-l)/2;
        long long sqr= mid*mid;
        if (sqr<x){
            ans=mid;
            l=mid+1;
        }
        else if (sqr>x){
            h=mid-1;
        }
        else
            return mid;
    }
    return ans;
}
int main()
{
    long long x;
    cout<<"Enter the no: ";
    cin>>x;
    cout<<"sqrt= "<<floorSqrt(x);
    return 0;
}