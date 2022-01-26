/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout<<"\nEnter the total purchases";
    double amount,discount,discount2;
    cin>>amount;
    if(amount>100){
        cout<<"\nA teacher";
        discount=amount-(amount*0.01);
        cout<<"\nTeacher's Discount="<<amount*0.01;
        cout<<"\nTotal Discount="<<discount;
        cout<<"\nThe sales tax="<<amount*0.05;
        cout<<"\nTotal="<<discount+(amount*0.01);
    }
    else if(amount<100){
        cout<<"\nNon teacher";
        discount2=amount-(amount*0.12);
        cout<<"\nNon teacher's discount="<<amount*0.12;
        cout<<"\nTotal discount="<<amount-discount2;
        cout<<"\nThe sales tax="<<amount*0.05;
        cout<<"\nTotal="<<discount2+(amount*0.12);
        
    }

    return 0;
}