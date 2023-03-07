#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;
    if (int(log2(n)) - log2(n) != 0) {
        cout << "khong phai la pow cua 2" << endl;
    }
    else {
        int hadamard[n][n];
        for (int x = 1; x < n; x += x) {
            for (int i = 0; i < x; i++) {
                for (int j = 0; j < x; j++) {
                    hadamard[i + x][j] = hadamard[i][j];
                    hadamard[i][j + x] = hadamard[i][j];
                    hadamard[i + x][j + x] = -hadamard[i][j];
                }
            }

        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << hadamard[i][j] << " , ";
            }
            cout << endl;
        }

    }
    return 0;
}