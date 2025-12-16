#include <iostream>
using namespace std;
int main()
{

  // cout << "Calculating Values" << endl;
  // // Declaring variables
  // int a, b;
  // // char = operator;
  // cout << "Enter Value of A = ";
  // cin >> a;

  // // cout << "Enter Operator (+, -, *, /, %) = ";
  // // cin >> operator;

  // cout << "Enter Value of B = ";
  // cin >> b;

  // cout << "Addition = " << a + b << endl;
  // cout << "Subtraction = " << a - b << endl;
  // cout << "Multiplication = " << a * b << endl;
  // cout << "Division = " << a / b << endl;
  // cout << "Modulus = " << a % b << endl;

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------

  // Check the character is lower or upper

  // char ch;

  // cout << "Enter Character : ";
  // cin >> ch;

  // if (ch >= 65 && ch <= 90)
  // {
  //   cout << "UpperCase\n";
  // }
  // else if (ch >= 97 && ch <= 122)
  // {
  //   cout << "LowerCase";
  // }
  // else
  // {
  //   cout << "Not an Alphabtes";
  // }

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------

  // Check Number is Prime or NOt=======================

  // bool isPrime = true;
  // int n;
  // cout << "Enter the Valur Of N : ";
  // cin >> n;

  // for (int i = 2; i <= n - 1; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     isPrime = false;
  //     break;
  //   }
  // }
  // if (isPrime == true)
  // {
  //   cout << "Prime Num\n";
  // }
  // else
  // {
  //   cout << "Non Prime\n";
  // }

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------

  // Find Factorial of N numbers=================================================================

  // int n;
  // int Fact = 1;
  // cout << "Enter The value of N : ";
  // cin >> n;
  // cout << n << "!= ";
  // for (int i = 1; i <= n; i++)
  // {
  //   Fact *= i;
  //   cout << "*";
  //   cout << i;
  // }
  // cout << " = " << Fact;

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------

  // Sum Of N numbers which is divisible by three 3

  // int n, sum = 0, i;
  // cout << "Enter The value of N : ";
  // cin >> n;

  // for (i = 1; i <= n; i++)
  // {
  //   if (i % 3 == 0)
  //   {
  //     sum += i;
  //     cout << i << endl;
  //   }
  // }
  // cout << "Sum of N Numbers Divisible by 3 is : " << sum << endl;

  // Check if a character is vowel or consonant.======================================================

  // char ch;
  // cout << "Enter the Character For checking Vowels Or not :";
  // cin >> ch;

  // if ((ch >= 65 && ch <= 90) || (ch >= 98 && ch <= 122))
  // {
  //   char lower = tolower(ch);

  //   if (lower == 98 || lower == 101 || lower == 105 || lower == 111 || lower == 117)
  //   {
  //     cout << "Vowels";
  //   }
  //   else
  //   {
  //     cout << "Constonants";
  //   }
  // }

  // Check if a number is positive, negative, or zero.===========================================================

  // int num;
  // cout << "Enter The Number :";
  // cin >> num;

  // if (num > 0)
  // {
  //   cout << "Positive";
  // }
  // else if (num == 0)
  // {
  //   cout << "Zero";
  // }
  // else
  // {
  //   cout << "Negative";
  // }

  // Q6.Find the largest among three numbers.============================================================

  // int a, b, c;
  // cout << "Enter The numbers :";
  // cin >> a >> b >> c;
  // if (a > b && a > c)
  // {
  //   cout << "A is greater than B , C";
  // }
  // else if (b > c && b > a)
  // {
  //   cout << "B is greater than A , C";
  // }
  // else if (c > a && c > b)
  // {
  //   cout << "C is greater than A , B";
  // }
  // else
  // {
  //   cout << "All numbers are equal";
  // }

  // Check whether a year is a leap year.============================================================
  // int year;
  // cout << "Enter the year :";
  // cin >> year;

  // if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
  // {
  //   cout << year << " " << "is a leap year";
  // }
  // else
  // {
  //   cout << year << " " << "not a leap year";
  // }

  // Q8. Check if a number is divisible by both 5 and 11.==========================================================

  // int num;
  // cout << "Enter The Number :";
  // cin >> num;

  // if (num % 5 == 0 && num % 11 == 0)
  // {
  //   cout << num << " " << " is Divisible by Both 5 and 11";
  // }
  // else
  // {
  //   cout << num << " " << "is Not Divisible by 5 and 11";
  // }

  // Check if a student passed or failed.============================================================

  // int marks;
  // cout << "Enter the Marks : ";
  // cin >> marks;

  // if (marks >= 33)
  // {
  //   cout << "Pass";
  // }
  // else
  // {
  //   cout << "Fail";
  // }

  // *Q10. Simple Calculator using if-else ( +, –, , / )===========================================================

  // char op;
  // int a, b;

  // cout << "Enter operator (+, -, /): ";
  // cin >> op;

  // if (op == '+')
  // {
  //   cout << "Result : " << (a + b);
  // }
  // else if (op == '-')
  // {
  //   cout << "Result : " << (a - b);
  // }
  // else if (op == '/')
  // {
  //   if (b != 0)
  //   {
  //     cout << "Result : " << (a / b);
  //   }
  //   else
  //   {
  //     cout << "Error : Division is not allowed ";
  //   }
  // }
  // else
  // {
  //   cout << "Invalid Operators";
  // }

  // Q11. Check whether a number is a palindrome.===========================================================

  // int num1, a, b, c;
  // cout << "Enter The Number :";
  // cin >> num1;
  // a = num1 / 100;
  // b = (num1 / 10) % 10;
  // c = num1 % 10;

  // if (a == c)
  // {
  //   cout << "Its Palindrome";
  // }
  // else
  // {
  //   cout << "Not Palindromes";
  // }

  // Q15. Check if triangle is valid.============================================================

  // int side1, side2, side3;
  // cout << "Enter All Sides : ";
  // cin >> side1 >> side2 >> side3;

  // if (((side1 + side2) > side3) &&
  //     ((side2 + side3) > side1) &&
  //     ((side3 + side1) > side2))

  // {
  //   cout << "Triangle is valid ";
  // }

  // else
  // {
  //   cout << "Triangle is not valid";
  // }

  return 0;
}