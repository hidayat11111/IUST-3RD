/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

struct date{
		int month, day, year;
};

int main(){
	char temp;
	date date1;
	cout << "Enter date (MM/DD/YYYY): ";
	cin >> date1.month >> temp >> date1.day >> temp >> date1.year;
	cout << endl << "Date is " << date1.month << "/" << date1.day << "/" << date1.year << endl;
    return 0;
}