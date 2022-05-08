#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x <= 0) {
        cout << "Invalid" << endl;
        return 0;
    }

    if(x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}