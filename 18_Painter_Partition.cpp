#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &nums, int n, int m, int maxValueTime)
{
  int painter = 1, time = 0;
  for (int i = 0; i < n; i++) // timeComplexity: O(n)
  {
    if (time + nums[i] <= maxValueTime)
    {
      time += nums[i];
    }
    else
    {
      painter++;
      time = nums[i];
    }
  }
  return painter <= m;1
}

int minTimeTOPaint(vector<int> &nums, int n, int m)
{
  int sum = 0, max_value = INT_MIN;
  for (int i = 0; i < n; i++) // timeComplexity: O(n)
  {
    sum += nums[i];
    max_value = max(max_value, nums[i]);
  }
  int st = max_value, end = sum, ans = -1;
  while (st <= end) // timeComplexity: O(log(sum - max_value))
  {
    int mid = st + (end - st) / 2;

    if (isPossible(nums, n, m, mid))
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      st = mid + 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {40, 30, 10, 20};
  int n = 4, m = 2;

  cout << "Minimum time taken by painter : " << minTimeTOPaint(nums, n, m) << endl;
  return 0;
}