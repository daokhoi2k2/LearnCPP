#include <iostream>

using namespace std;

int main()
{
    int h;
    cin >> h;
    
    for(int i = 1; i <= h; i++) {
        // Loop space
        for(int space = h - i; space >= 1; space--) {
            cout << " ";
        }
        // Loop *
        for(int j = 1; j <= i; j++) {
            
           cout << "*";
        }
        cout << endl;
    }
}