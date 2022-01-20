#include <iostream>
#include<conio.h>
using namespace std;
    int main(){
        int count_hot=0,count_pleaseant=0,count_cold=0;
        // sorted array
        int array[30]={41,45,55,58,59,59,60,61,62,65,67,68,68,72,74,78,78,79,80,82,87,88,90,93,91,92};
        //loop for high temperatures
        
        cout<<"\nThe higher temperatures are=:";
        for (int i = 0; i <26; i++) {
            if(array[i]>=85){
                int count=0;
                cout<<","<<array[i];
                count_hot++;
            }}
        cout<<"\nThe total hot days are="<<count_hot;    
            
        // loop pleasant temperatures
        
        cout<<"\nThe Pleaseant temperatures are =";
        for (int i = 0; i <26; i++) {
            if(60<=array[i]<=84){
                cout<<","<<array[i];
                count_pleaseant++;
            }}
        cout<<"\nThe total pleaseant days are=" <<count_pleaseant;  
        
       //loop cold temperatures
        cout<<"\nThe Cold temperatures are =";
        for (int i = 0; i <26; i++) {
            if(array[i]<=60){
                cout<<","<<array[i];
                count_cold++;
            }}   
        cout<<"\nThe total cold days are="<<count_cold;    
        
return 0;}