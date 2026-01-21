#include <iostream>
using namespace std;

// void hello()
// {
//   cout << "Hello world !";
// }

// int sum(int a, int b)
// {
//   int sum = a + b;
//   return sum;
// }

// int sumofN(int n)
// {
//   int sum = 0;
//   for (int i = 0; i <= n; i++)
//   {
//     sum += i;
//   }
//   return sum;
// }

// int factofN(int n)
// {
//   int fact = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     fact *= i;
//   }
//   return fact;
// }

// int sumOfDigits(int num)
// {
//   int sum = 0;

//   while (num > 0)
//   {
//     int lastDigi = num % 10;
//     num /= 10;
//     sum += lastDigi;
//   }
//   return sum;
// }

// int factofN(int n)
// {
//   int fact = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     fact *= i;
//   }
//   return fact;
// }
// int nCr(int n, int r)
// {
//   int fact_n = factofN(n);
//   int fact_r = factofN(r);
//   int fact_nmr = factofN(n - r);
//   return fact_n / (fact_r * fact_nmr);
// }

bool isPrime(int n)
{
  if (n <= 0)
    return false;
  // for (int i = 2; i * i <= n; i++)
  for (int i = 2; i < n; i++) // for checking the num is prime or not
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

// void PrintPrime(int n)
// {
//   for (int i = 2; i <= n; i++)
//   {
//     if (isPrime(i))
//     {
//       cout << i << " ";
//     }
//   }
// }
int main()
{
  // hello();

  // cout << sum(10, 5) << endl;

  // cout << sumofN(10) << endl;
  // cout << sumofN(5) << endl;

  // cout << factofN(3) << endl;
  // cout << factofN(5) << endl;

  // cout << sumOfDigits(33456) << endl;

  // int n = 8, r = 2;
  // cout << nCr(n, r) << endl;

  int num;
  cout << "Enter the number :";
  cin >> num;
  if (isPrime(num))
  {
    cout << num << " is Prime Num";
  }
  else
  {
    cout << num << " is not prime num";
  }

  // int num;
  // cout << "Enter the number :";
  // cin >> num;

  // cout << "Prime Numbers is :" << num << ": ";
  // PrintPrime(num);
  return 0;
}