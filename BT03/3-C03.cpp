#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for(int j = a; j <= b; j++)
        {
            string s1 = "";
            string s2 = "";
            int tmp = j;
            while(tmp != 0)
            {
                s1 += char(tmp % 10 + '0');
                s2 = char(tmp % 10 + '0') + s2;
                tmp /= 10;
            }
            if(s1 == s2)
                count ++;
        }
        cout << count << endl;
    }
    return 0;
}
