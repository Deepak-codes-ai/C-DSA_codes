// Sorting is the process of arranging data in a perticular order

#include <iostream>
using namespace std;

// BUBBLE SORTING METHOD-----------------------------

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    bool isSwap = false;
    for (int h = 0; h < n - i - 1; h++)
    {
      if (arr[h] > arr[h + 1])   // Ascending order
        // if (arr[h] < arr[h + 1]) // Descending order
        {
          swap(arr[h], arr[h + 1]);
          isSwap = true;
        }
    }
    if (!isSwap)
    {
      return;
    }
  }
}

void PrintArr(int arr[], int n)
{
  cout << "The array is : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
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

// SELECTION  SORTING METHOD-----------------------------

/*

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int smallIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      // if (arr[j] > arr[smallIndex])//Descending order
      if (arr[j] < arr[smallIndex])//Ascending order
      {
        smallIndex = j;
      }
    }
    swap(arr[i], arr[smallIndex]);
  }
}

void PrintArr(int arr[], int n)
{
  cout << "Selection short is : ";
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
  selectionSort(arr, n);
  PrintArr(arr, n);
  return 0;
}

*/

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