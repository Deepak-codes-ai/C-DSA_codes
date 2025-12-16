#include <iostream>
using namespace std;

double Power(double x, long long n)
{
  double ans = 1.0;

  if (n < 0)
  {
    x = 1 / x;
    n = -n;
  }

  while (n > 0)
  {
    if (n & 1)
    {
      ans *= x;
    }
    x *= x;
    n >>= 1;
  }
  return ans;
}

int main()
{
  double x;
  long long n;

  cout << "Enter the value of x = ";
  cin >> x;

  cout << "Enter the value of n = ";
  cin >> n;

  cout << "Result is = " << Power(x, n) << endl;
  return 0;
}