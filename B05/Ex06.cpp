#include <iostream>

using namespace std;

int main()
{
    int h;
    cin >> h;
    
    for(int i = 1; i <= h; i++) {
        for(int j = h; j >= i; j--) {
           cout << "*";
        }
        cout << endl;
    }
}