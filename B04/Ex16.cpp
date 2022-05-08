#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x % 3 == 0 && x % 5 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}