#include <iostream>
using namespace std;

int main() {
	int a[100];
	int b[100];
	int x, y;

	for (int i = 0; i < 5; i++) {
		cout << &a[i] << " , ";
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << (void*)&b[i] << " , ";
	}
	cout << endl;

	cout << &x << endl;
	cout << &a << endl;
	cout << &b << endl;
	cout << &y << endl;
	return 0;
}