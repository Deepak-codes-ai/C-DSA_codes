#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // vector<int> vec; // Its 1st Method which is empty arry;

  // vector<int> vec = {1, 3, 4, 7, 8, 9, 0, 6}; // Its 2nd Method in which value is given arry;

  // vector<int> vec(5, 1); // Its 3rd Method which is fixed arry;

  vector<int> vec = {1, 3, 4, 3, 4};
  int ans = 0;
  for (int value : vec)
  {
    ans ^= value;
  }
  cout << ans;

  // Adding Values in vec arry using push_back function
  // vec.push_back(1);
  // vec.push_back(3);
  // vec.push_back(4);
  // vec.push_back(7);
  // vec.push_back(8);

  // Deleting Values from vec arry using pop_back function
  // vec.pop_back();
  // vec.pop_back();

  // Printing front Values from vec arry using front function
  // cout << vec.front() << endl;

  // Printing back Values from vec arry using back function
  // cout << vec.back() << endl;

  // Accessing Values from vec arry using at function
  // cout << vec.at(2) << endl;

  // Printing Size of vec arry
  // cout << vec.size() << endl;

  // Printing Whole vec arry
  // for (int i = 0; i < vec.size(); i++)
  // {
  //   cout << vec[i] << endl;
  // }

  return 0;
}