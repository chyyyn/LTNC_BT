#include <iostream>

using namespace std;

int* sum(int a, int b)
{
	int c;
	c = a+b;
	return &c;
}

int main()
{
	int c;
	cin >> c;
	int* d;
	d = &c;
	cout << &(d+1);
	int* p = NULL;
	cout << *p;
	cout << &sum(c, 3);
}
