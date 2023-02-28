#include <iostream>
using namespace std;

int N(int k, int n){
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return N(k-1, n-1) + N(k, n-1);
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << N(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}
