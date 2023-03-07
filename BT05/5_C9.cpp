#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int rand_num(int N) {
    srand(time(NULL));
    return rand() % N;
}

int main() {
    int N;
    cin >> N;
    cout << rand_num(N);
    return 0;
}