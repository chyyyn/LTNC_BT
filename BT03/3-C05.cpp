#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = 0;


    int row = 0;
    int col = n - 1;
    int i = 1;
    int tmp_row = m - 1;
    int tmp_col = n - 1;
    while(i <= m * n)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[row][j] != 0)
                continue;
            a[row][j] = i;
            i++;
        }
        if(row < m / 2)
            row += tmp_row;
        else
            row -= tmp_row;
        tmp_row --;

        for(int j = 0; j < m; j++)
        {
            if(a[j][col] != 0)
                continue;
            a[j][col] = i;
            i++;
        }
        if(col < n / 2)
            col += tmp_col;
        else
            col -= tmp_col;
        tmp_col --;

        for(int j = n - 1; j >= 0; j--)
        {
            if(a[row][j] != 0)
                continue;
            a[row][j] = i;
            i++;
        }
        if(row < m / 2)
            row += tmp_row;
        else
            row -= tmp_row;
        tmp_row --;

        for(int j = m - 1; j >= 0; j--)
        {
            if(a[j][col] != 0)
                continue;
            a[j][col] = i;
            i++;
        }
        if(col < n / 2)
            col += tmp_col;
        else
            col -= tmp_col;
        tmp_col --;
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
