#include <iostream>
using namespace std;


//assignment operators
int main()
// create variable and assign variable
//create another variable
{
  int a = 21;
  int c;
//set the variables equal to eachother
//assign different values using assignment operators
  c = a;
  cout << "Line 1 - = Operator, Value of C = :" << c << endl;
  c += a;
  cout << "Line 1 - += Operator, Value of C = :" << c << endl;
  c -= a;
  cout << "Line 1 - -= Operator, Value of C = :" << c << endl;
  c /= a;
  cout << "Line 1 - /= Operator, Value of C = :" << c << endl;
  c *= a;
  cout << "Line 1 - *= Operator, Value of C = :" << c << endl;
  c = 200;
  c %= a;
  cout << "Line 1 - %= Operator, Value of C = :" << c << endl;

  return 0;
  }
