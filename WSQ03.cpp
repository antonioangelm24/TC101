#include <iostream>
using namespace std;

int main(){
  int x;
  int y;
  cout << "This programm will do a lot of things LOL. It will make the difference, the product, the division, and the rest of the division of two numbers. That you'll provide." << endl;
  cout << "Write the first number: " ;
  cin >> x;
  cout << "Write the second number: " ;
  cin >> y;
  cout << " x + y =: " << (x+y) << endl;
  cout << " x - y =: " << (x-y) << endl;
  cout << " x * y =: " << (x*y) << endl;
  cout << " x / y =: " << (x/y) << endl;
  cout << " The remainder of x / y is =: " << (x%y) << endl;
  return 0;
}
