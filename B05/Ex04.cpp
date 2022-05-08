#include <iostream>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            if(!(i == 1 || i == h)) {
                if(j == 1 || j == w) {
                    cout << "*";
                }  else {
                    cout << "~";
                } 
                continue;
            } 
            cout << "*";
        }
        cout << endl;
    }
}