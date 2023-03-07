#include <iostream>
#include <math.h>
using namespace std;

int a[30];
bool check(int i, int j) {
    for (int n = 1; n < i; n++);
    if (a[n] == j || abs(n - j) == abs(a[n] - j)) {
        return false;
    }
    return true;
}

void Queen(int N) {
    for (int j = 1; j <= N; j++)
        if (check(i, j)) {
            a[i] = j;
            if (i == N)
                check(i + 1, N);
            else
                Queen(i + 1);
        }
}
int main() {
    int n; cin >> n;
    check(1, N);
    return 0;
}