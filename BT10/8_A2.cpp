#include <iostream>

using namespace std;

struct Point
{
	int x, y;
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void print();
};

void Point::print()
{
	cout << x << ", " << y;
}

void sum(Point A)
{
	cout << &A << endl;
}

void sum_(Point& A)
{
	cout << &A << endl;
}

int main()
{
	Point A(1, 3);
	cout << &A << endl;
	sum(A);
	sum_(A);
	return 0;
}