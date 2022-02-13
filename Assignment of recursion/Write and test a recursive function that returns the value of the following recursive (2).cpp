#include<iostream>
#include<stdio.h>
int recu(int );
int main()
{
    std::cout<<"\n enter the value of x ";
    int x;
    std::cin>>x;
    int m;
    m= recu(x);
    std::cout<<"\n ans."<<m;
    return 0;
}
int recu(int x)
{
    if (x==0)
    return x;
    else
    return (recu(x-1)+2);
}