#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int z = ceil(1.00 * x / y);
    cout << z * y;

}