#include <iostream>
using namespace std;
int main (){
  float r, h, v, pi;
  pi = 3.1416 ;
  cout << "Tell me the radius of the cylinder's base: ";
  cin >> r ;
  cout << "Tell me the height of the cylinder: ";
  cin >> h ;
  v = h * pi * r * r ;
  cout << "The volume of the cylinder is: ";
  cout << v << endl;


  return 0;
}
