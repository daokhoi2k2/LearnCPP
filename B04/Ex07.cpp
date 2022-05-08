#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    // đối với giá trị trên 2 tỷ sẽ được tính như kiểu 4 byte đối với g++
    long long x;
    cin >> x;
    cout << x << endl;
    cout << fixed << setprecision(2) << sqrt(x);
}