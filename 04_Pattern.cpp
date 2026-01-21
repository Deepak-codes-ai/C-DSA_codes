#include <iostream>
using namespace std;

int main()
{
  // 1. Print 1 to n in each row
  // int n = 4;
  // for (int i = n; i > 0; i--)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << " " << "*";
  //   }
  //   cout << endl;
  // }

  // 2. Print A B C D in each row
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   char ch = 'A';
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << " " << ch;
  //     ch += 1;
  //   }
  //   cout << endl;
  // }

  // 3. Print continuous alphabets row-wise
  // int n = 4;
  // char ch = 'A';
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << " " << ch;
  //     ch++;
  //   }
  //   cout << endl;
  // }

  // 4. Print n×n stars
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << " *";
  //   }
  //   cout << endl;
  // }

  // 5. Print numbers 1 to n*n continuously
  // int n = 3;
  // int num = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << " " << num;
  //     num++;
  //   }
  //   cout << endl;
  // }

  // 6. Print 1 2 3 4 in each row (same as #1)
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     cout << " " << j;
  //   }
  //   cout << endl;
  // }

  // 7. Increasing star pattern (triangle)
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j < i + 1; j++)
  //   {
  //     cout << " *";
  //   }
  //   cout << endl;
  // }

  // 8. Continuous alphabets in triangular form
  // int n = 4;
  // char ch = 'A';
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << " " << ch;
  //     ch += 1;
  //   }
  //   cout << endl;
  // }

  // 9. Repeating alphabets triangle (A, BB, CCC...)
  // int n = 4;
  // char ch = 'A';
  // for (int i = 0; i < n + 1; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << " " << ch;
  //   }
  //   ch++;
  //   cout << endl;
  // }

  // 10. A, AB, ABC, ABCD pattern
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   char ch = 'A';
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << " " << ch;
  //     ch += 1;
  //   }
  //   cout << endl;
  // }

  // 11. Number triangle (1, 12, 123...)
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   int num = 1;
  //   for (int j = 1; j < i + 1; j++)
  //   {
  //     cout << " " << num;
  //     num++;
  //   }
  //   cout << endl;
  // }

  // 12. Reverse number triangle (1, 21, 321...)
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j > 0; j--)
  //   {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // 13. Continuous numbers in triangle
  // int n = 4;
  // int num = 1;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << endl;
  // }

  // 14. Continuous alphabets triangle
  // int n = 4;
  // char ch = 'A';
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << ch << " ";
  //     ch++;
  //   }
  //   cout << endl;
  // }

  // 15. Reverse alphabet triangle (A, BA, CBA…)
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   char ch = 'A' + i;
  //   for (int j = i + 1; j > 0; j--)
  //   {
  //     cout << ch << " ";
  //     ch--;
  //   }
  //   cout << endl;
  // }

  // 16. Number pattern (1111, 222, 33, 4)
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << " ";
  //   }
  //   for (int j = 0; j < n - i; j++)
  //   {
  //     cout << i + 1;
  //   }
  //   cout << endl;
  // }

  // 17. Hollow diamond pattern
  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < (n - i - 1); j++)
  //   {
  //     cout << " ";
  //   }
  //   cout << "*";
  //   if (i != 0)
  //   {
  //     for (int j = 1; j <= 2 * i - 1; j++)
  //     {
  //       cout << " ";
  //     }
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     cout << " ";
  //   }
  //   cout << "*";
  //   if (i != n - 2)
  //   {
  //     for (int j = 1; j <= 2 * (n - i) - 5; j++)
  //     {
  //       cout << " ";
  //     }
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // return 0;
}
