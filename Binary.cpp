#include <iostream>
using namespace std;
// Decimal To Binary ====================================================================================================================================================================================
// int decTobin(int decnum)
// {
//   int ans = 0, pow = 1;
//   while (decnum > 0)
//   {
//     int rem = decnum % 2;
//     decnum /= 2;

//     ans += rem * pow;
//     pow *= 10;
//   }
//   return ans;
// }
// Binary To Decimal ====================================================================================================================================================================================

int BinToDec(int binnum)
{
  int ans = 0, pow = 1;
  while (decnum > 0)
  {
    int rem = binnum % 10;
    binnum /= 2;

    ans += rem * pow;
    pow *= 2;
  }
  return ans;
}
int main()
{

  // int BinNum;
  // cout << "Enter BinNum : ";
  // cin >> BinNum;
  // cout << BinToDec(BinNum) << endl;

  int decnum;
  cout << "Enter DecNum : ";
  cin >> decnum;
  // for (int i = 1; i <= decnum; i++)
  // {
  cout << decTobin(decnum) << endl;
  // }
  return 0;
}