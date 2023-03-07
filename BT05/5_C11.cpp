#include <iostream>
#include <string>

using namespace std;

void binary_num(int n)
{
    int binaryNum[100];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

int main()
{
    int n;
    cin >> n;
    binary_num(n);
    return 0;
}