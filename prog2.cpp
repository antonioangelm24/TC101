#include <iostream>
using namespace std;
int main (){
  int x, y;
  cout << "This programm will give you the product, the integer division, and the remainder of that division of two numbers" << endl;
  cout << "Give me the first number: ";
  cin >> x;
  cout << "Give me the second number: ";
  cin >> y;
  cout << "The product of " << x << " * " << y << "= " << x*y << endl ;
  cout << "The division of " << x << " / " << y << "= " << x/y << endl ;
  cout << "The remainder of the division of " << x << " / " << y << "= " << x%y << endl ;
  return 0;


}
