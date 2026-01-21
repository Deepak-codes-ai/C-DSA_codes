#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// int SearchSingle(vector<int> arr)
// {
//   int n = arr.size();
//   int st = 0;
//   int end = n - 1;
//   if (n == 1)
//   {
//     return arr[0];
//   }
//   while (st <= end)
//   {
//     int mid = st + (end - st) / 2;

//     if (mid == 0 && arr[0] != arr[1])
//       return arr[mid];

//     if (mid == n - 1 && arr[n - 1] != arr[n - 2])
//       return arr[mid];

//     if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
//       return arr[mid];

//     if (mid % 2 == 0)
//     {
//       if (arr[mid - 1] == arr[mid]) // left
//       {
//         end = mid - 1;
//       }
//       else // right
//       {
//         st = mid + 1;
//       }
//     }
//     else
//     {
//       if (arr[mid - 1] == arr[mid]) // right
//       {
//         st = mid + 1;
//       }
//       else // left
//       {
//         end = mid - 1;
//       }
//     }
//   }
//   return -1;
// }

// int main()
// {
//   vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 6, 6};
//   cout << SearchSingle(arr) << endl;
//   return 0;
// }

// ======================================================================================================================================

// int LinearSearch(vector<int> arr, int size, int target)
// {
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i] == target)
//     {
//       return i;
//     }
//   }
//   return 1;
// }

// int main()
// {
//   vector<int> arr = {12, 34, 5, 66, 44, 33};
//   int size = arr.size();
//   int target = 33;
//   cout << "The target is at Index no : " << LinearSearch(arr, size, target) << endl;
// }

// ======================================================================================================================================

// int main()
// {

//   int maxNum = INT_MIN;
//   int minNum = INT_MAX;

//   int size = 6;
//   int arr[size];

//   cout << "Enter the Number : ";
//   for (int i = 0; i < size; i++)
//   {
//     cin >> arr[i];

//     if (arr[i] > maxNum)
//     {
//       maxNum = arr[i];
//     }
//     if (arr[i] < minNum)
//     {
//       minNum = arr[i];
//     }
//   }

//   cout << "Smallest num is :" << minNum << endl;
//   cout << "Greates num is :" << maxNum << endl;
//   return 0;
// }

// ======================================================================================================================================

// int reverseArray(int arr[], int size)
// {
//   int start = 0;
//   int end = size - 1;

//   while (start < end)
//   {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
// }

// int main()
// {
//   int arr[] = {
//       1,
//       2,
//       3,
//       4,
//       5,
//       6,
//   };
//   int size = 6;
//   reverseArray(arr, size);
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

// ======================================================================================================================================

int main()
{
  int arr[] = {12, 34, 22, 23, 32, 121, 44};
  int n = 7;
  int sum = 0;
  int product = 1;

  for (int i = 0; i <= n; i++)
  {
    sum += arr[i];
    product *= arr[i];
  }

  cout << "The sum is : " << sum << endl;
  cout << "The producr is : " << product << endl;
  return 0;
}