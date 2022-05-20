/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

const char ESC = 27;
const double toll = 0.5;

class tollBoth{
    private:
        unsigned int totalCars;
        double totalCash;
    public:
        tollBoth(){
            totalCars = 0;
            totalCash = 0;
        }
        void pay(){
            totalCars++;
            totalCash += toll;
        }
        void noPay(){
            totalCars++;
        }
        void display(){
            cout << "Total number of cars: " << totalCars << endl;
            cout << "Total cash collected: " << totalCash << endl;
        }
};

int main(){
    tollBoth tollboth;
    char ch;
    cout << "Enter 0 for each non-paying car" << endl;
    cout << "Enter 1 for each paying car" << endl;
    cout << "Press ESC to exit" << endl;
    do{
        cin >> ch;
        if(ch == '0'){
            tollboth.noPay();
        }
        if(ch == '1'){
            tollboth.pay();
        }
    }while(ch != ESC);
    tollboth.display();
    return 0;
}