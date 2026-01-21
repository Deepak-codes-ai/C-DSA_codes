#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main()
{
  // vector<int> vec; // Its 1st Method which is empty arry;

  // vector<int> vec = {1, 3, 4, 7, 8, 9, 0, 6}; // Its 2nd Method in which value is given arry;

  // vector<int> vec(5, 1); // Its 3rd Method which is fixed arry;

  // vector<int> vec = {1, 3, 4, 3, 4};

  // Removing first elements of vec arry
  // vec.erase(vec.begin());
  // removes first element
  // vec.erase(vec.begin() + 1, vec.begin() + 4);

  // Inserting elem on vec arry
  // vec.insert(vec.begin() + 2, 100);

  // Clear elem of vec arry
  // vec.clear();

  // 1st LOOP SYSTEM-----------

  // for (int x : vec)
  // {
  //   cout << x << " ";
  // }

  // 2nd LOOP SYSTEM-----------
  // vector<int>::iterator it;

  // forward loop
  // for (it = vec.begin(); it != vec.end(); it++)
  // {
  //   cout << *(it) << " ";
  // }
  // cout << endl;

  // backward loop
  // for (
  // vector<int>::reverse_iterator --= in place of this we olso use --auto like

  //     auto
  //         it = vec.rbegin();
  //     it != vec.rend(); it++)
  // {
  //   cout << *(it) << " ";
  // }
  // cout << endl;

  // cout << vec.size() << endl;
  // cout << vec.capacity();

  // int ans = 0;
  // for (int value : vec)
  // {
  //   ans ^= value;
  // }
  // cout << ans;

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

  // lists-------------------------------------------------------------------------------------------------------------------

  // list<int> l = {12, 34, 54, 34, 22};
  // deque<int> d = {12, 34, 54, 34, 22}; //double ended ques
  // for (int i : d)
  // {
  //   cout << i << ' ';
  // }
  // cout << endl;

  // Pairs-------------------------------------------------------------------------------------------------------------------

  // pair<int, string> p = {2, "Deepak"};  1st method
  pair<int, pair<char, int>> p = {2, {'a', 2}};

  cout << p.first << endl;
  cout << p.second.first << endl;
  cout << p.second.second << endl;

  return 0;
}