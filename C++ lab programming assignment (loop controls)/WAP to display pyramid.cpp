#include<iostream>
#include <math.h>
using namespace std;
int main (){
//using for loop 
//using 2 loops for rows and coloumns
        for (int i =1; i <=20; i++) {
            for (int j = 1; j <=(2*i)-1; j++) {
                cout<<"X";
            }
//leaving a line using newe line character
           cout<<"\n";
        }
    return 0;}