#include <iostream>
using namespace std;

int factorial(int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		int fac = x * factorial(x - 1);
		cout << "x = " << fac << " at " << &x << endl;
		return fac;
	}
}
int main() {
	int n; cin >> n;
	cout << "factorial of " << n << " is " << factorial(n) << endl;
	return 0;
}