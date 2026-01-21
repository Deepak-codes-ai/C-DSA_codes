#include <iostream>
using namespace std;

int main()
{
  // OPERATORS==========================================================================================================
  int a = 10, b = 20, c = 3;
  // Increament===============
  // int d = a++;
  // int d = ++a;

  // Decreaments ===============
  // int d = a--;
  int d = --a;

  cout
      << "ARTHIMETICS OPERTORS" << endl; //============================================================

  cout << "Sum = " << (a + b) << endl;
  cout << "Sub = " << (a - b) << endl;
  cout << "Multiple = " << (a * b) << endl;            // 200
  cout << "Division = " << (b / a) << endl;            // 2
  cout << "Reminder = " << (b % c) << endl;            // 2
  cout << "Point value = " << (b / (double)c) << endl; // through casting

  cout << "RELATIONAL OPERTORS" << endl; //============================================================

  cout << (a > b) << endl;
  cout << (a >= b) << endl;
  cout << (a <= b) << endl;
  cout << (a < b) << endl;
  cout << (a == b) << endl;
  cout << (a != b) << endl;

  cout << "LOGICAL OPERTORS" << endl; //============================================================

  cout << !(a > b) << endl;             // Not
  cout << ((a > b) || (b > c)) << endl; // Or
  cout << ((a > b) && (b > c)) << endl; // And

  cout << "URNARY OPERTORS" << endl; //============================================================

  // This is for a++ {first work then update} - post incre
  // cout << "Value of d is :" << d << endl;
  // cout << "Value of a is :" << a << endl;

  // This is for ++a {First update then work} - pre incre
  // cout << "Value of d is :" << d << endl;
  // cout << "Value of a is :" << a << endl;

  // Decreaments =================================================

  // This is for a-- {first work then update} - post decre
  // cout << "Value of d is :" << d << endl;
  // cout << "Value of a is :" << a << endl;

  // This is for --a {First update then work} - pre decre
  // cout << "Value of d is :" << d << endl;
  // cout << "Value of a is :" << a << endl;

  return 0;
}
