#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    // Không cần dấu () vì độ ưu tiên của toán tử && sẽ cao hơn ||
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}