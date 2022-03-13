/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

struct Distance{
	int feet;
	float inch;
};

struct Volume{
	Distance length, width, height;
};

int main(){
	float len, wid, hei;
	Volume room1 = {{13, 2.5}, {11, 5.5}, {5,2.5}};

	len = room1.length.feet+ room1.length.inch/12;
	wid = room1.width.feet+ room1.width.inch/12;
	hei = room1.height.feet+ room1.height.inch/12;
	
	cout << "Volume = " << len * wid * hei << " cubic feet" << endl;
	return 0;
}