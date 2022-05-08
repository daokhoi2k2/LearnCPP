#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 97 && c <= 122)
    {
        cout << (char)(c - 32);
    }
    else
    {
        cout << c;
    }
}