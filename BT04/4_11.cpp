#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string password[n];
    int len[n];
    for (int i=0; i<n; i++)
    {
        cin >> password[i];
        len[i] = password[i].size();
    }
    bool Pass = true;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (len[i] % 2 == 1 && len[i] == len[j])
            {
                for (int k=0; k<len[i]/2; k++)
                {
                    if (password[i][k] != password[j][len[i]-k-1])
                        {
                            Pass = false;
                        }
                }
            }
            if (Pass)
                {
                    cout << len[i] << " " << password[i][len[i]/2];
                    return 0;
                }
            Pass = true;
        }
    }
}
