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

int main()
{
	Point A(1, 3);
	A.print();
	return 0;
}