#include <iostream>
using namespace std;

int main(){
  float a, b, c;
  cout << "enter 3 numbers: ";
  cin >> a >> b >> c;

  if((a >= b) && (a >= c))

    cout << "largest number is " << a;

  if((b >= c) && (b <= a))

    cout << "largest number is " << b;


  if((c >= a) && (c >= b))

    cout << "largest number is " << c;

  return 0;

}
