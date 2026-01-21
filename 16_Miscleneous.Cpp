#include <iostream>
using namespace std;

// Using Loops ===============
int powerofTwo_loop(int n)
{
  if (n <= 0)
    return false;
  while (n > 1)
  {
    if (n % 2 != 0)
      return false;
    n = n / 2;
  }
  return true;
}
// Using bitwise Operators===============
int poweroftwo_bitwise(int n)
{
  if (n <= 0)
    return false;
  (n & (n - 1)) == 0;
}
int main()
{

  // Bitwise AND &======================
  int a = 4, b = 8;
  cout << (a & b) << endl;
  cout << (6 & 10) << endl;
  cout << (6 | 10) << endl;
  cout << (6 ^ 10) << endl;
  cout << (10 << 2) << endl;
  cout << (10 >> 2) << endl;

  // Bitwise OR &======================
  cout << (a | b) << endl;

  // Bitwise X-OR &======================
  cout << (a ^ b) << endl;

  // Bitwise LEFT SHIFT << &======================
  cout << (b << 1) << endl;

  // Bitwise RIGHT SHIFT >> &======================
  cout << (a >> 1) << endl;

  // long int
  cout << sizeof(long int) << " bytes" << endl;
  // long long
  cout << sizeof(long long int) << " bytes" << endl;
  // short
  cout << sizeof(short int) << " bytes" << endl;
  // signed
  cout << sizeof(signed int) << " bytes" << endl;
  // unsigned
  cout << sizeof(unsigned int) << " bytes" << endl;

  // REVERSE AN INTEGERS N AND STORES IN NEWNUM=================

  // int num, rev = 0;
  // cout << "enter the number for reverse : ";
  // cin >> num;

  // while (num > 0)
  // {
  //   int digits = num % 10;
  //   rev = rev * 10 + digits;
  //   num = num / 10;
  // }
  // cout << "Reversed value is :" << rev << endl;

  // FIND IF THE NUMBER IS POWER OF 2 OR NOT WITHOUT USING LOOP AND USING LOOPS OLSO==============================

  int n;
  cout << "Enter the num :";
  cin >> n;
  cout << "Using Loops";
  cout << (powerofTwo_loop(n) ? "Yes" : "No") << endl;
  cout << "Using bitwise Operators";
  cout << (poweroftwo_bitwise(n) ? "Yes" : "No") << endl;

  return 0;
}