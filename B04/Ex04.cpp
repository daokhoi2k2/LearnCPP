#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int cTemperature = 0;
    cin >> cTemperature;
    float fTemperature = 1.00 * cTemperature * 9 / 5 + 32;
    cout << fixed << setprecision(2) << fTemperature;
}