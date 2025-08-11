#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n = 9;
    int nums[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int curSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curSum += nums[i];

        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }

    cout << "sum: " << maxSum << endl;

    return 0;
}
