#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = '.';

    if(n % 2 == 0)
    {
        int row = 1;
        for(int i = 0; i < n; i++)
        {
            a[row][i] = '*';
            row += 2;
            if(row >= n)
                row = 0;
        }
    }
    else
    {
        int row = 0;
        for(int i = 0; i < n; i++)
        {
            a[row][i] = '*';
            row += 2;
            if(row >= n)
                row = 1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
