#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    long long x;
    long long tong = 0;
    cin >> x;
    // Độ phức tạp O(1)
    if (x % 2 == 0)
    {
        cout << x / 2 << endl;
    }
    else
    {
        cout << (-x - 1) / 2 << endl;
    }

    // Độ phức tạp O(n)
    for (int i = 1; i <= x; i++)
    {
        tong += pow(-1, i) * i;
    }

    cout << tong;
}