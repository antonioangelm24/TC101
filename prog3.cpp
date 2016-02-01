#include <iostream>
using namespace std;
int main(){
  float x, y;
  cout << "This programm will give you the addition, the substraction, the product, and the integer division of two numbers" << endl;
  cout << "Give me the first number: ";
  cin >> x;
  cout << "Give me the second number: ";
  cin >> y;

  cout << "The addition of " << x << " + " << y << "= " << x+y << endl ;
  cout << "The substraction of " << x << " - " << y << "= " << x-y << endl ;
  cout << "The product of " << x << " * " << y << "= " << x*y << endl ;
  cout << "The division of " << x << " / " << y << "= " << x/y << endl ;
  return 0;
}
