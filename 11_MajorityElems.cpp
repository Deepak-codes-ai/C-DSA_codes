#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> PairSum(vector<int> nums, int target)
{
  int n = nums.size();
  vector<int> ans;
  int start = 0, end = n - 1;
  while (start < end)
  {
    int sum = nums[start] + nums[end];
    if (sum < target)
    {
      start++;
    }
    else if (sum > target)
    {
      end--;
    }
    else
    {
      ans.push_back(start);
      ans.push_back(end);
      return ans;
    }
  }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (nums[i] + nums[j] == target)
  //     {
  //       ans.push_back(i);
  //       ans.push_back(j);
  //       return ans;
  //     }
  //   }
  // }
}
int main()
{
  vector<int> nums = {2, 5, 11, 45};
  int target = 56;
  vector<int> ans = PairSum(nums, target);
  cout << ans[0] << " " << ans[1] << endl;
  return 0;
}