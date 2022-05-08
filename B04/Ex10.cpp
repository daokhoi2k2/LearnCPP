#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    long long x;
    float tong = 0;
    cin >> x;
    // Độ phức tạp O(1)
    // cout << x << endl;
    // cout << 1 - 1.0 / (x + 1);

    // Độ phức tạp O(n)
    for(int i = 1; i <= x; i++) {
        tong += 1.00 / (i * (i + 1));
    }

    cout << tong;
}