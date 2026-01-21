// Sorting is the process of arranging data in a perticular order

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// void Sort(int arr[], int size)
// {
//   for (int i = 0; i < size - 1; i++)
//   {
//     bool isSwap = false;
//     for (int j = 0; j < size - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         swap(arr[j], arr[j + 1]);
//         isSwap = true;
//       }
//     }
//     if (!isSwap)
//     {
//       return;
//     }
//   }
// }
// int main()
// {
//   int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
//   int size = 10;
//   Sort(arr, size);
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// BUBBLE SORTING METHOD-----------------------------
/*
void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
int PrintArr(int arr[], int n)
{
  cout << "Bubble Sort is : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main()
{
  // int arr[] = {4, 1, 5, 3, 2}; // unsorted arry
  int arr[] = {1, 2, 3, 4, 5}; // sorted arry
  int n = 5;
  bubbleSort(arr, n);
  // cout << "The arr is : ";
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  PrintArr(arr, n);
  return 0;
}
*/
// SELECTION  SORTING METHOD-----------------------------

// void selectionSort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     int smallIndex = i;
//     for (int j = i + 1; j < n; j++)
//     {
//       // if (arr[j] > arr[smallIndex])//Descending order
//       if (arr[j] < arr[smallIndex]) // Ascending order
//       {
//         smallIndex = j;
//       }
//     }
//     swap(arr[i], arr[smallIndex]);
//   }
// }

// void PrintArr(int arr[], int n)
// {
//   cout << "Selection sort is :";
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << ' ';
//   }
//   cout << endl;
// }

// int main()
// {
//   int arr[] = {1, 4, 5, 2, 3};
//   int n = 5;
//   selectionSort(arr, n);
//   PrintArr(arr, n);
//   return 0;
// }

// INSERTION  SORTING METHOD-----------------------------

/*
void insertionSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int curr = arr[i];
    int prev = i - 1;

    while (prev >= 0 && arr[prev] > curr)//Ascending order
    // while (prev >= 0 && arr[prev] > curr)//Descending order
    {
      arr[prev + 1] = arr[prev];
      prev--;
    }
    arr[prev + 1] = curr; // placing the curr value in its correct pos
  }
}

void PrintArr(int arr[], int n)
{
  cout << "Insertion short is : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 4, 5, 2, 3};
  int n = 5;
  insertionSort(arr, n);
  PrintArr(arr, n);
  return 0;
}

*/
// MERGE SORTING METHOD-----------------------------
void merge(vector<int> &arr, int st, int mid, int end)
{
  vector<int> temp;
  int i = st, j = mid + 1;
  while (i <= mid && j <= end)
  {
    if (arr[i] < arr[j])
    {
      temp.push_back(arr[i]);
      i++;
    }
    else
    {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while (i <= mid)
  {
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= end)
  {
    temp.push_back(arr[j]);
    j++;
  }

  for (int idx = 0; idx < temp.size(); idx++)
  {
    arr[idx + st] = temp[idx];
  }
}
void mergeSort(vector<int> &arr, int st, int end)
{
  if (st < end)
  {

    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, st, mid, end);
  }
}
int main()
{
  vector<int> arr = {23, 12, 32, 31, 8, 4, 3};

  mergeSort(arr, 0, arr.size() - 1);
  for (int value : arr)
  {
    cout << value << ' ';
  }
  cout << endl;
  return 0;
}

// MERGE SORTING METHOD-----------------------------

// void merge(vector<int> &A, int m, vector<int> &B, int n)
// {
//   int idx = m + n - 1, i = m - 1, j = n - 1;
//   while (i >= 0 && j >= 0)
//   {

//     if (A[i] >= B[j])
//     {
//       A[idx--] = A[i--];
//     }
//     else
//     {
//       A[idx--] = B[j--];
//     }
//   }
//   while (j >= 0)
//   {
//     A[idx--] = B[j--];
//   }
// }

// int main()
// {
//   vector<int> A = {1, 2, 3, 0, 0, 0};
//   int m = 3;

//   vector<int> B = {2, 5, 6};
//   int n = 3;

//   merge(A, m, B, n);
//   for (int value : A)
//   {
//     cout << value << " ";
//   }
//   return 0;
// }