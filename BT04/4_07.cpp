#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    string tmp1 = "";

    for(int i = 0; i < n; i++)
    {
        tmp1 += s[i];
        for(int j = 0; j < n; j++)
        {
            string tmp2 = tmp1 + s[j];
            cout << tmp2 << ' ';
            for(int k = 0; k < n; k++)
            {
                string tmp3 = tmp2 + s[k];
                cout << tmp3 << ' ';
            }
        }
        tmp1 = "";
    }
    return 0;
}
