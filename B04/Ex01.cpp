#include<iostream>
#include<iomanip>

using namespace std;

// Tính tổng hiệu tích thương của 2 số nhập từ bàn phím
int main() {
	int a, b;
	cin >> a >> b;
	int tong = a + b;
	int hieu = a - b;
	// long long tich = (long long)a * b;
	// 1ll = 1 long long
	long long tich = 1ll * a * b;
	float thuong = 1.0 * a / b;
	cout << "Tong: " << tong << endl;
	cout << "Hieu: " << hieu << endl;
	cout << "Tich: " << tich << endl;
	cout << "Thuong: " << fixed << setprecision(2) << thuong<< endl;
//	printf("%0.2f", thuong);
	return 0;
}
