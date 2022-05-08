#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int z = floor(x / y);
    cout << z * y;

}