#include <vector>
#include <stdio.h>
#include <iostream>

#include <unordered_map>

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> map;
    int n1, n2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      int complement = target - nums[i];
      if (map.find(complement) != map.end())
        return {map[complement], i};
      map[nums[i]] = i;
    }

    return {};
  }
};

int main()
{
  Solution s;
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> result = s.twoSum(nums, target);
  cout << result[0] << " " << result[1] << endl;

  if (result[0] == 0 && result[1] == 1)
  {
    cout << "Test passed" << endl;
  }
  else
  {
    cout << "Test failed" << endl;
  }

  // Test 2
  vector<int> nums2 = {3, 2, 4};
  int target2 = 6;
  vector<int> result2 = s.twoSum(nums2, target2);
  cout << result2[0] << " " << result2[1] << endl;

  if (result2[0] == 1 && result2[1] == 2)
  {
    cout << "Test passed" << endl;
  }
  else
  {
    cout << "Test failed" << endl;
  }

  // Test 3

  vector<int> nums3 = {3, 3};
  int target3 = 6;
  vector<int> result3 = s.twoSum(nums3, target3);
  cout << result3[0] << " " << result3[1] << endl;

  if (result3[0] == 0 && result3[1] == 1)
  {
    cout << "Test passed" << endl;
  }
  else
  {
    cout << "Test failed" << endl;
  }
}
