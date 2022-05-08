#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            cout << 1 << endl;
        }
        else if (a == b || a == c || b == c)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            {
                cout << 4 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
    else
    {
        cout << "INVALID";
    }
}