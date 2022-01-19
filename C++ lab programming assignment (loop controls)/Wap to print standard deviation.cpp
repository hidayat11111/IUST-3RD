#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
	
    int arr[10], n, i,square_sum=0,avg1,sum=0,avg2;
    double standard_devi;
//declaring the size of array
    cout << "Enter the size of the array : ";
    cin >> n;
//taking user input
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++){
        square_sum=(arr[i]*arr[i])+square_sum;
        
    }
}
