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

Point mid_point(Point A, Point B)
{
	int a = (A.x + B.x) / 2;
	int b = (A.y + B.y) / 2;
	Point mid(a, b);
	return mid;
}

int main()
{
	Point A(1, 3);
	Point B(3, 5);
	Point C = mid_point(A, B);
	C.print();
}
