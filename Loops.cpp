#include <iostream>
using namespace std;

int main()
{
  int n, i;
  int sum = 0;
  // int n, i = 1;

  // While Loops -----=-------------------============------------------=================================================================

  // cout << "Enter the Number :";
  // cin >> n;
  // while (i <= n)
  // {
  //   cout << i << endl;
  //   i++;
  // }

  // for (initialization; condition; updation)

  // for (int i = 1; i <= n; i++)
  // {
  //   sum += i;
  //   cout << i << endl;
  //   if (i == 4)
  //   {
  //     break; // Keywords
  //   }
  // }
  // cout << "Sum is : " << sum << endl;

  // ======================Sum Of Odd Number ======================

  // for (int i = 1; i <= n; i++)
  // {

  //   if (i % 2 != 0)
  //   {
  //     sum += i;
  //     cout << i << endl;
  //   }
  // }
  // cout << "Sum is : " << sum << endl;

  // Do-While Loops -----=-------------------============------------------=================================================================

  cout << "Enter Number N : ";
  cin >> n;
  cout << "Enter Number I: ";
  cin >> i;
  do
  {
    cout << i << endl;
    i++;
  } while (i <= n);

  return 0;
}