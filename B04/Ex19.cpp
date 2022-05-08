#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    // if (c >= 97 && c <= 122)
    if (c >= 'a' && c <= 'z')
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}