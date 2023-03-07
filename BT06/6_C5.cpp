#include <iostream>
using namespace std;

void array_in(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void array_out(int a[], int n) {
	cout << "Array: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}

bool Check_prime(int n) {
	if (n < 2) {
		return false;
	}
	else if (n > 2) {
		if (n % 2 == 0) {
			return false;
		}
		for (int i = 3; i <= sqrt(float(n)); i += 2) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}

void prime_out(int a[], int n) {
	cout << "Prime : ";
	for (int i = 0; i < n; i++) {
		if (Check_prime(a[i]) == true) {
			cout << a[i] << "  ";
		}
	}
	cout << endl;
}

int main()
{
	int a[MAX], n;
	cout << "enter N = ";
	cin >> n;
	array_in(a, n);
	array_out(a, n);
	prime_out(a, n);

	return 0;
}