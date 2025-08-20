// brute force
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 9;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // int mW = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {

    //         int wd = j - i;
    //         int ht = min(height[i], height[j]);
    //         int area = wd * ht;
    //         mW = max(mW, area);
    //     }
    // }
    // cout << mW;
    int lp = 0, rp = n - 1, mW = 0;
    while (lp < rp)
    {
        int wd = rp - lp;
        int ht = min(height[lp], height[rp]);
        int area = wd * ht;
        mW = max(mW, area);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    cout << mW;
}
