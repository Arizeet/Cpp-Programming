#include<iostream>
#include<bits/stdc++.h>
int main()
{
    int decimal,rem;
    std::cout<<"Enter the decimal: "<<std::endl;
    std::cin>>decimal;
    std::vector<int> v;
    while (decimal>=1)
    {
        rem=decimal%2;
        v.push_back(rem);
        decimal=decimal/2;
    }
    for (int i = v.size()-1; i >= 0; i--)
    {
        std::cout<<v[i];
    }
    
    return 0;
}