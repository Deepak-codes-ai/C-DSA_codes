#include <iostream>
using namespace std;

// Pass by refrence---------
// void chngeA(int *ptr)
// {
//   *ptr = 40;
// }
// Pass by alias---------
void chngeA(int &ptr)
{
  ptr = 40;
}

int main()
{
  int a = 10;
  int *ptr = &a; // drefrence ptr *ptr
  // int **ptr1 = &ptr; // pointer to pointer
  // int *ptr_null = NULL;

  // cout << "Value of a is = " << a << endl;
  cout << "Adress of a is = " << ptr << endl;
  ptr++;
  cout << "Adress of a is = " << ptr << endl;
  // cout << "Adress of ptr1 is = " << ptr1 << endl;
  // cout << "The value of **ptr1 = " << **ptr1 << endl;
  // cout << "The value of ptr_null = " << ptr_null << endl;

  int arr[] = {1, 2, 3, 4, 5};
  cout << *(arr+1) << endl;

  // ------------------------------------------------------------------------------------------------------------------------Pass by refrence

  chngeA(a);
  cout << "in main func : " << a;
  return 0;
}
