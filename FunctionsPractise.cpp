#include <iostream>
#include <climits>
using namespace std;

// int main()
// {
// int a, b;
// cout << "Enter the numbers :";
// cin >> a >> b;

// cout << "Sum Is :" << (a + b) << endl;
// cout << "Sub Is :" << (a - b) << endl;
// cout << "Mult Is :" << (a * b) << endl;
// cout << "Div Is :" << (a / b) << endl;
// cout << "Mod Is :" << (a % b) << endl;

// cout << (a > b) << endl;  // 1==true
// cout << (a >= b) << endl; // 0==false
// cout << (a < b) << endl;
// cout << (a <= b) << endl;
// cout << (a != b) << endl;
// cout << (a == b) << endl;

// Conditionals==============================

// 1.------------------------------------------------------

// char ch;
// cout << "Enter the Characters : ";
// cin >> ch;

// if ((ch >= 65) && (ch <= 90))
// {
//   cout << ch << " IS IN CAPITAL CASE";
// }
// else if ((ch >= 97) && (ch <= 122))
// {
//   cout << ch << " is in smaller case";
// }
// else
// {
//   cout << "Invalid character";
// }

// 2.------------------------------------------------------

// int marks;
// cout << "Enter the Marks : ";
// cin >> marks;

// if (marks >= 90)
// {
//   cout << "Grade A for marks : " << marks;
// }
// else if ((marks >= 80) && (marks < 90))
// {
//   cout << "Grade B for marks : " << marks;
// }
// else
// {
//   cout << "Grade C for marks : " << marks;
// }

// 3--------------------------------------------------------

// int n = 45, c = 67;
// cout << ((n < c) ? "C is Greater than N" : "N is greater then C");

// Loops ==============================

// 1.-------------------------------------------------------

// int n = 4;
// int i = 1;
// // for (int i = 1; i <= n; i++)
// do
// {
//   cout << " " << i << endl;
//   if (i == 2)
//   {
//     break;
//   }
//   i++;
// } while (i <= n);

// 2. Sum of all od numbers from 1 to n----------
// int n;
// cout << "Enter the numbers :";
// cin >> n;
// int sum = 0;
// for (int i = 1; i <= n; i++)
// {
//   if (i % 2 != 0)
//   {
//     sum += i;
//   }
// }
// cout << sum << endl;

// 3. Prime num or not--------------------------------------
// int n;
// bool isPrime = true;
// cout << "Enter the Value : ";
// cin >> n;

// for (int i = 2; i < n - 1; i++)
// {
//   if (n % i == 0)
//   {
//     isPrime = false;
//     break;
//   }
// }
// if (isPrime == true)
// {
//   cout << "Prime Number";
// }
// else
// {
//   cout << "Not Prime";
// }

// 4. Nested Loop==========================================

// int n = 4;
// // char ch = 'A';
// for (int i = 1; i <= n; i++)
// {
//   // int num = 1;
//   for (int j = 1; j <= n - i; j++)
//   {
//     cout << " ";
//   }
//   for (int k = 1; k <= (2 * i - 1); k++)
//   {
//     cout << k;
//   }
//   cout << endl;
// }
// return 0;

// }

// finding binary numbers-------------------------

// int Decimal(int decimal)
// {
//   int ans = 0, pow = 1;

//   while (decimal > 0)
//   {
//     int rem = decimal % 2;
//     decimal /= 2;

//     ans += rem * pow;
//     pow *= 10;
//   }
//   return ans;
// }

// int main()
// {
//   int decNum = 4;
//   for (int i = 0; i <= decNum; i++)
//   {
//     cout << Decimal(i) << endl;
//   }
//   // cout << Binary(101) << endl;
//   return 0;
// }

// Max and min numbers==================

int main()
{
  int size = 6;
  int arr[size] = {1, 2, 3, 4, 5, -8};
  int max = INT_MIN;
  int max_index = -1;
  int min = INT_MAX;
  int min_index = -1;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
      min_index = i;
    }
    if (arr[i] > max)
    {
      max = arr[i];
      max_index = i;
    }
  }
  cout << "Maximum num is :" << max <<" "<< " At index num : " << max_index << endl;
  cout << "Minimun num is :" << min <<" "<< " At index num : " << min_index << endl;
  return 0;
}
