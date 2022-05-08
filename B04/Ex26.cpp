#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (c > max)
    {
        max = c;
    }

    if (c < min)
    {
        min = c;
    }

    cout << max << " " << min;
}