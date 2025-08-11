#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int ar[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int curSum = 0;
        for (int ed = st; ed < n; ed++)
        {
            curSum += ar[ed];
            maxSum = max(curSum, maxSum);
        }
    }
    cout << "max subarray sum: " << maxSum << endl;

    return 0;
}