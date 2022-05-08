#include <iostream>

using namespace std;

int main()
{
    int h;
    cin >> h;
    
    // Loop row
    for(int i = 1; i <= h; i++) {
        // Loop column
        for(int j = 1; j <= i; j++) {    
            if(i >= 3 && !(j == 1 || j == i) && i != h) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}