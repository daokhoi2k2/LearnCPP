#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 48 && c <= 57)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}