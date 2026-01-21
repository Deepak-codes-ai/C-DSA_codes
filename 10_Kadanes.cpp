#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
  int size = 7;
  int arr[size] = {-3, -4, -5, 4, 1, 7, -8};
  
      //-------------------------------------------------------//
      // for (int start = 0; start < size; start++)
      // {
      //   for (int end = start; end < size; end++)
      //   {
      //     for (int i = 0; i <= end; i++)
      //     {
      //       cout << arr[i] ;
      //     }
      //     cout << " "<<" ";
      //   }
      //   cout << endl;
      // }
      //-------------------------------------------------------//

      //-------------------------------------------------------//
      // int maxsum = INT_MIN;
      // for (int start = 0; start < size; start++)
      // {
      //   int csum = 0;
      //   for (int end = start; end < size; end++)
      //   {
      //     csum += arr[end];
      //     maxsum = max(csum, maxsum);
      //   }
      // }
      // cout << "Max SubArrays is : " << maxsum << endl;
      //-------------------------------------------------------//

      //-------------------------------------------------------//
      // Kadanes algo
  int csum = 0;
  int maxsum = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    csum += arr[i];
    maxsum = max(csum, maxsum);
    if (csum < 0)
    {
      csum = 0;
    }
  }
  cout << "Max sum is : " << maxsum << endl;

  return 0;
}