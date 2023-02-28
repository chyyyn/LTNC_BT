#include <iostream>
using namespace std;

bool a[1000][1000];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(a[x - 1][y - 1])
        {
            cout << "yes";
            return 0;
        }
        int tmp_x = x - min(x, y);
        int tmp_y = y - min(x, y);
        for(int j = 0; j < n; j++)
        {
            a[x - 1][j] = true;
            a[j][y - 1] = true;
            a[tmp_x + j][tmp_y + j] = true;
        }

    }
    cout << "no";
    return 0;
}
