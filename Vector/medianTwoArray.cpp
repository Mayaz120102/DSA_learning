#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the value of x and y:  ";
    cin >> x >> y;

    vector<int> num1(x);
    cout << "enter the elements of num1: ";
    for (int i = 0; i < x; i++)
    {
        cin >> num1[i];
    }
    vector<int> num2(y);
    cout << "enter the elements of num2: ";
    for (int i = 0; i < y; i++)
    {
        cin >> num2[i];
    }

    vector<int> mergedArray = num1;
    mergedArray.insert(mergedArray.end(), num2.begin(), num2.end());

    sort(mergedArray.begin(), mergedArray.end());

    cout << "merged array: ";
    for (int num : mergedArray)
    {
        cout << num << " ";
    }

    cout << endl;
    int n = mergedArray.size();
    double median;
    if (n % 2 == 1)
    {
        median = mergedArray[n / 2];
    }
    else
    {
        median = (mergedArray[n / 2 - 1] + mergedArray[n / 2]) / 2.0;
    }
    if (median == (int)median)
    {
        cout << "median= " << fixed << setprecision(5) << median << endl;
    }
    else
    {
        cout << "median= " << median << endl;
    }

    // cout << "median= " << median << endl;

    cout << endl;
    return 0;
}