#include <iostream>

using namespace std;

int main()
{
    int h;
    cin >> h;
    
    for(int i = 1; i <= h; i++) {
        // Loop space in row
        for(int space = 1; space < i; space++) {
            cout << " ";
        }

        // Loop * in row
        for(int j = h - i; j >= 0; j--) {    
           cout << "*";
        }
        cout << endl;
    }
}