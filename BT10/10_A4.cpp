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
};


int main()
{
	Point A(1, 3);
	cout << &A << "\n" << &(A.x) << "\n" << &(A.y);
	return 0;
}