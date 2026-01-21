#include <iostream>
#include <climits>
using namespace std;
/*
<climits> contains important integer limit constants:
INT_MAX  → Maximum value an int can store
INT_MIN  → Minimum value an int can store
LONG_MAX, LONG_MIN, CHAR_MAX, etc.
*/

/* ------------------------------------------------------------
     SECTION 3: Pass By Value
   ------------------------------------------------------------ */
/*
int changeArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = 2 * arr[i];
  }
}
  */

/* ------------------------------------------------------------
     SECTION 4: Linear Search
   ------------------------------------------------------------ */
// int linearSearch(int arr[], int size, int target)
// {
//   for (int i = 0; i < size; i++)
//   {
//     if (arr[i] == target)
//     {
//       return i;
//     }
//   }
//   return -1; // Target Not Found
// }

/* ------------------------------------------------------------
     SECTION 5: Reverse an Array
   ------------------------------------------------------------ */
// int RverseArray(int arr[], int size)
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
int main()
{
  /* ------------------------------------------------------------
      SECTION 1: Basic Array Examples (Commented Learning Code)
     ------------------------------------------------------------ */

  // int marks[6] = {100, 67, 87, 98, 56, 3};
  // int marks[] = {100, 67, 87, 98, 56, 3};

  // int size = 6;
  // int marks[size];

  // sizeof examples
  // cout << sizeof(size) << endl;
  // cout << sizeof(marks) << endl;

  // Print elements using indexing
  // cout << marks[0] << endl;
  // cout << marks[1] << endl;
  // cout << marks[2] << endl;

  // Print array using loop
  // for (int i = 0; i < size; i++)
  // {
  //     cout << marks[i] << endl;
  // }

  // Taking user input
  // cout << "Enter Marks :";
  // for (int i = 0; i < size; i++)
  // {
  //     cin >> marks[i];
  // }
  // for (int i = 0; i < size; i++)
  // {
  //     cout << marks[i] << endl;
  // }

  /* ------------------------------------------------------------
      SECTION 2: Find Smallest & Greatest Values From Array
     ------------------------------------------------------------ */

  /*
int size = 6;
int nums[size];         // Array to store numbers
int smallest = INT_MAX; // Start with highest possible value
int greatest = INT_MIN; // Start with lowest possible value

int SmallIndex = -1; // Store index of smallest number
int greatIndex = -1; // Store index of greatest number */

  /* ------------------------------------------------------------
      STEP 1: Take Numbers From User
     ------------------------------------------------------------ */

  // cout << "Enter Numbers: ";
  // for (int i = 0; i < size; i++)
  // {
  //   cin >> nums[i];
  // }

  /* ------------------------------------------------------------
      STEP 2: Find Smallest & Greatest Number + Their Index
     ------------------------------------------------------------ */

  // for (int i = 0; i < size; i++)
  // {
  // ---- Smallest Number ----
  // if (nums[i] < smallest)
  // {
  //   smallest = nums[i];
  //   SmallIndex = i;
  // }

  // Short method (Alternative)
  // smallest = min(nums[i], smallest);

  // ---- Greatest Number ----
  // if (nums[i] > greatest)
  // {
  //   greatest = nums[i];
  //   greatIndex = i;
  // }

  // Short method (Alternative)
  // greatest = max(nums[i], greatest);
  // }

  /* ------------------------------------------------------------
      STEP 3: Output Results
     ------------------------------------------------------------ */

  // cout << "\nSmallest number  : " << smallest
  //      << " (Stored at index: " << SmallIndex << ")" << endl;

  // cout << "Greatest number  : " << greatest
  //      << " (Stored at index: " << greatIndex << ")" << endl;

  /* ------------------------------------------------------------
       SECTION 3: Pass By Value
     ------------------------------------------------------------ */

  // int arr[] = {1, 2, 3, 4, 5};

  // changeArray(arr, 5);
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << arr[i] << ' ';
  // }
  // cout << endl;

  /* ------------------------------------------------------------
      SECTION 4: Linear Search
     ------------------------------------------------------------ */

  // int arr[] = {12, 34, 3, 4, 5, 67, 7, 8, 99};
  // int size = 9;
  // int target = 99;

  // cout << "Targeted Index Value is : " << linearSearch(arr, size, target) << endl;

  // return 0;

  /* ------------------------------------------------------------
    SECTION 5: Reverse an Array
   ------------------------------------------------------------ */
  // int size = 9;
  // int arr[] = {12, 34, 3, 4, 5, 67, 7, 8, 99};
  // RverseArray(arr, size);
  // for (int i = 0; i < size; i++)
  // {
  //   cout << arr[i] << ' ';
  // }
  // cout << endl;
  // ====================================================
  // int size = 9;
  // int arr[] = {12, 34, 3, 4, 5, 67, 7, 8, 99};
  // int start = 0, end = size - 1;
  // while (start < end)
  // {
  //   swap(arr[start], arr[end]);
  //   start++;
  //   end--;
  // }
  // for (int i = 0; i < size; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  /* ------------------------------------------------------------
    SECTION 5: Sort an Array
   ------------------------------------------------------------ */
  int size = 5;
  int arr[size] = {23, 45, 67, 89, 0};

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
      }
    }
  }
  cout << "Sorted Arry is = ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i]<<" ";
  }

  /* ------------------------------------------------------------
    SECTION 5: Max And MIN an Array
   ------------------------------------------------------------ */
  // int size = 5;
  // int arr[size] = {23, 45, 67, 89, 0};
  // int max = arr[0];
  // int min = arr[0];
  // for (int i = 0; i < size; i++)
  // {
  //   if (arr[i] > max)
  //   {
  //     max = arr[i];
  //   }
  //   if (arr[i] < min)
  //   {
  //     min = arr[i];
  //   }
  // }
  // cout << "Max Number is =" << max << endl;
  // cout << "Min Number is =" << min << endl;
  return 0;
}
