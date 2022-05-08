#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 65 && c <= 90)
    {
        c += 32;
        cout << c;
    }
    else
    {
        cout << c;
    }
}