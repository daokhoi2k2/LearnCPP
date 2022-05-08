#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int a = 10;
	int x = ++a + (a++, 11);
	cout << "a: " << a << endl;
	cout << x;
	system("PAUSE");
	return 0;
}

