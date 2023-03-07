#include <iostream>
#include <math.h>
using namespace std;

int rnd(double num) { 
    int num_int = (int)num;
    if (num - num_int < 0.5)
        return floor(num);
    else
        return ceil(num);
}

int rnd(double x) { 
    return round(x);
}


int main() {
    double num;
    cin >> num;
    cout << rnd(num) << endl;
    return 0;
}