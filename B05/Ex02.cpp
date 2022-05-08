#include <iostream>

using namespace std;

int main()
{
    int l;
    cin >> l;
    
    for(int i = 1; i <= l; i++) {
        for(int j = 1; j <= l; j++) {
            if(!(i == 1 || i == l)) {
                if(j == 1 || j == l) {
                    cout << "*";
                }  else {
                    cout << " ";
                } 
                continue;
            } 
            cout << "*";
        }
        cout << endl;
    }
}