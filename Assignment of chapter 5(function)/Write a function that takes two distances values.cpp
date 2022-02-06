#include <iostream>
//declaring a function 
int Comparer(int firVal, int secVal)
{
  if (firVal > secVal)
  return firVal;
  else
  return secVal;
}
//main function
int main()
{
 int firVal, secVal;
 std::cout << "Enter first Distance value: ";
 std::cin >> firVal;
 std::cout << "Enter second Distance value: ";
 std::cin >> secVal;
 std::cout << "The larger value is " << Comparer(firVal, secVal) << ".";
 return 0;
}