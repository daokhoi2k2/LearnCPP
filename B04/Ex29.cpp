#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    int d, w , y;
    cin >> x;
    y = x / 365;
    w = (x % 365) / 7;
    d = (x % 365) % 7;
    cout << y << " " << w << " " << d;
}