/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class Int{
    private:
    int i;
    public:
    Int(){
        i = 0;
    }
    Int(int i1){
        i = i1;
    }
    void add(Int i2, Int i3){
        i = i2.i + i3.i;
    }
    void display(){
        cout << i << endl;
    }
};

int main(){
    Int i1(2);
    Int i2(7);
    Int i3;

    i3.add(i1, i2);
    i3.display();
    return 0;
}
