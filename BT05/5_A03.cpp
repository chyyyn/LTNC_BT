#include <iostream>
using namespace std;

void pirnt(int a, int& b) {
	cout << &a << " " << &b << endl;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << &a << endl;
	cout << &b << endl;
	return 0;
}