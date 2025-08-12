#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Brute force(o{n^2})
// class Solution
// {
// public:
//     int majorityElement(vector<int> nums)
//     {
//         int n = nums.size();
//         for (int val : nums)
//         {
//             int freq = 0;

//             for (int el : nums)
//             {
//                 if (el == val)
//                 {
//                     freq++;
//                 }
//             }
//             if (freq > n / 2)
//             {
//                 return val;
//             }
//         }
//         return -1;
//     }
// };

// better approach using sort(O(nlogn)
//  class Solution
//  {
//  public:
//      int majorityElement(vector<int> nums)
//      {
//          int n = nums.size();

//         // sorting
//         sort(nums.begin(), nums.end());

//         int freq = 1, ans = nums[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (nums[i] == nums[i - 1])
//             {
//                 freq++;
//             }
//             else
//             {
//                 freq = 1;
//                 ans = nums[i];
//             }

//             if (freq > n / 2)
//             {
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// moor's algorithm(best approach) (O(n))

class Solution
{
public:
    int majorityElement(vector<int> nums)
    {
        int freq = 0, ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (freq == 0)
            {
                ans = nums[i];
            }
            if (ans == nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 2, 1, 1, 1}; // hardcoded input

    int ans = sol.majorityElement(nums);
    if (ans != -1)
        cout << "Majority element is: " << ans << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}