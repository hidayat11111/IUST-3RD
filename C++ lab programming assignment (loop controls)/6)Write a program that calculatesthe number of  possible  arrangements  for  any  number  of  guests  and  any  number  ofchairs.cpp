#include<iostream>
using namespace std;
int main (){
    int i,guest,chairs,total=1;
    //taking input
    cout<<"Enter the no. of guest";
    cin>>guest;
    //taking input
    cout<<"Enter the no. of chairs";
    cin>>chairs;
    //conditional statement
    if(guest>chairs){
        for (int i = 0; i < chairs; i++) {
            total=total*guest;
            guest--; //decerement operator
        }
    }
    //final result
    cout<<"No. of possible arrangements are:"<<total;
    return 0;}
