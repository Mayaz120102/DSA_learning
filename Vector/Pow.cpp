#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    int n;

    cout << "input the value of x: ";
    cin >> x;

    cout << "input the value of n: ";
    cin >> n;

    long binFom = n;
    if (n < 0)
    {
        x = 1 / x;
        binFom = -binFom;
    }

    double ans = 1;
    while (binFom > 0)
    {
        if (binFom % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binFom /= 2;
    }
    cout << fixed << setprecision(5) << ans << endl;
}