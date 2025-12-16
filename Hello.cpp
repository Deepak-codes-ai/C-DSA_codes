#include <iostream>
using namespace std;

int main()
{
  // Hello World and for using One line in with printing two wordin another line

  cout << "Hello World"
          "\n"
          "Deepak"
       << endl;
  cout << "Hello World" << endl;

  // Variables ==============================================

  int age = 25;
  cout << "Age is " << age << endl;

  char grade = 'A';
  cout << "Grade is " << grade << endl;

  float PI = 3.14f;
  cout << "Value of PI is " << PI << endl;

  double price = 100.99;
  cout << "Value of Price is " << price << endl;

  bool isSafe = true;
  cout << "isSafe is " << isSafe << endl;

  // Type Casting =======================================

  // Conversion++++++++++++++ small to big
  char grade2 = 'B';
  int value = grade2; // converted the value of grade in value through ASCII code
  cout << "Value is " << value << endl;

  // Casting++++++++++++++++++  big to small
  double price2 = 200.88;
  int newPrice = (int)price2;
  cout << "New Price is " << newPrice << endl;

  // UserInput=========

  int age2;
  cout << "Enter Your Age2 :";
  cin >> age2;
  cout << "The Age2 is :" << age2 << endl;

  return 0;
}
