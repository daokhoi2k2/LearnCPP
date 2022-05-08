#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int tong = a + b;
	int hieu = a - b;
	long long tich = a * b;
	float thuong = 1.0 * a / b;
	cout << "Tong: " << tong << endl;
	cout << "Hieu: " << hieu << endl;
	cout << "Tich: " << tich << endl;
	cout << "Thuong: " << fixed << setprecision(2) << thuong<< endl;
//	printf("%0.2f", thuong);
	return 0;
}

