#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key)
{
    int s=0,e=n;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]>key)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    cout<<binarySearch(arr,n,key);  //Time Complexity= O(log(n,2))
    return 0;
}