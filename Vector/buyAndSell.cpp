#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << maxProfit;
}