
#include<iostream>
using namespace std;
int bitonic(int arr[], int n){
    int l=0,h=n-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        if ((mid==0 ||arr[mid-1]<arr[mid]) && (mid==n-1 || arr[mid]>arr[mid+1])){
            return arr[mid];
        }
        if (arr[mid-1]<arr[mid]){
            l=mid+1;
        }
        else
            h=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter no of ele:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Bitonic point is: "<<bitonic(arr,n);
    return 0;
}