#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

#define PI 3.14

int main() {
    int r;
    cout << "Nhap vao r: ";
    cin >> r;
    float acreage = PI * pow(r, 2);
    float perimeter = 2 * PI * r;
    cout << "Area (Acreage): " << fixed << setprecision(2) << acreage << endl;
    cout << "Perimeter: " << fixed << setprecision(2) << perimeter << endl;
}