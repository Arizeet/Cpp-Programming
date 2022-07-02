#include<iostream>
int main()
{
    int binary;
    std::cout<<"Enter the Binary: "<<std::endl;
    std::cin>>binary;
    int val=0,base=1;
    while (binary>0)
    {
        int last_digit=binary%10;
        val=val+(last_digit*base);
        binary=binary/10;
        base=base*2;
    }
    std::cout<<"The decimal is: "<<val;
    return 0;
}