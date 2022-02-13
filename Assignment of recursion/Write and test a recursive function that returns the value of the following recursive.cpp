#include<iostream>
#include<stdio.h>
int rec(int );
int main()
{
    std::cout<<"\n Enter the value of x ";
    int x;
    std::cin>>x;
    int m;
    m= rec(x);
    std::cout<<"\n Answer=."<<m;
    return 0;
}
int rec(int x)
{
    if (x=0)
    return 0;
    else
    return (x-1)+2;
}