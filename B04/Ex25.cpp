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
        if(c == 90) {
            cout << "a";
            return 1;
        }
        cout << (char)(c + 33);
    }
    else if (c >= 97 && c <= 122)
    {
        if(c == 122) {
            cout << "a";
            return 1;
        }
        cout << (char)(c + 1);
    }
    else
    {
        cout << "INVALID";
    }
}