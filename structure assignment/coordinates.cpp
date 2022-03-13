/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

struct point{
	int x, y;
};

int main(){
	point p1, p2, p3;
	
	cout << "Enter cordinates for p1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter cordinates for p2: ";
	cin >> p2.x >> p2.y;
	
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	
	cout << "Coordinates of p1+p2 are: " << p3.x << ", " << p3.y << endl;
	return 0;
}