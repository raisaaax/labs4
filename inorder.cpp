#include <iostream>
using namespace std;

int main(){
  int x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;

  cout << "The sum is: " << x + y << endl;
  cout << "The difference is: " << x - y << endl;
  cout << "The product is: " << x * y << endl;
  cout << "The distance is: " << abs(x - y) << endl;
  cout << "The mean average is: " << (((double)(x - y) / 2) + (x - y)) * -1 << endl;
  return 0;
}
