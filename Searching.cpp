#include <iostream>
#include <vector>
using namespace std;
// Linear Search -----------------------------------------------------------------------------------------------------Time Complexity O(n)
//  int LinearSearch(vector<int> arr, int size, int target)
//  {
//    for (int i = 0; i < size; i++)
//    {
//      if (target == arr[i])
//      {
//        return i;
//      }
//    }
//    return -1; // for invalid value
//  }
//  int main()
//  {
//    vector<int> arr = {23, 56, 4, 5, 68, 65, 44, 33};
//    int size = arr.size();
//    int target = 44;

//   cout << LinearSearch(arr, size, target) << endl;
//   return 0;
// }

// Binary Search========================================================================================Time Complexity O(log n)

// int BinarySearch(vector<int> arr, int target)
// {
//   int start = 0;
//   int end = arr.size() - 1;

//   while (start <= end)
//   {
//     int mid = (start + end) / 2;

//     if (target > arr[mid])
//     {
//       start = mid + 1;
//     }
//     else if (target < arr[mid])
//     {
//       end = mid - 1;
//     }
//     else
//     {
//       return mid;
//     }
//   }
//   return -1;
// }

// Binary shorted reverse--------------------------------------------------------------------------------------------------------------------

// int BinarySortedreverse(vector<int> arr, int target)
// {
//   int start = 0;
//   int end = arr.size() - 1;

//   while (start <= end)
//   {
//     int mid = start + (end - start) / 2;

//     if (arr[mid] == target)
//     {
//       return mid;
//     }

//     if (arr[start] <= arr[mid]) // left shorted
//     {
//       if (arr[start] <= target && target <= arr[mid])
//       {
//         end = mid - 1;
//       }
//       else
//       {
//         start = mid + 1;
//       }
//     }
//     else
//     {
//       if (arr[mid] <= target <= arr[end]) // right shorted
//       {
//         start = mid + 1;
//       }
//       else
//       {
//         end = mid - 1;
//       }
//     }
//   }
//   return -1;
// }

int PeakMounted(vector<int> arr)
{
  int start = 1, end = arr.size() - 2;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
    {
      return mid; // for peak valueindex no
      // return arr[mid]; //for peak value
    }
    else if (arr[mid] > arr[mid - 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> arr = {0, 3, 8, 9, 5, 2};
  // vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
  // vector<int> arr = {12, 23, 34, 56, 78, 90};
  // int target = 0;
  cout << PeakMounted(arr) << endl;
  // cout << "Target at index no : " << BinarySortedreverse(arr, target) << endl;
  return 0;
}
