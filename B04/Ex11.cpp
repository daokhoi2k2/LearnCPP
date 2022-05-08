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
    cout << x << endl;
    cout << x * (x + 1);

    // Độ phức tạp O(n)
    // for(int i = 1; i <= x; i++) {
    //     tong += 2 * i;
    // }

    // cout << tong;
}