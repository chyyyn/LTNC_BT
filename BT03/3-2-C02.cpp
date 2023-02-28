#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int _max = -1000000;
    int _min = 1000000;
    int even_sum = 0;
    int count_odd = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a > _max)
            _max = a;
        if(a < _min)
            _min = a;
        if(a % 2 == 0)
            even_sum += a;
        else
            count_odd ++;
    }
    cout << _max << endl << _min << endl << even_sum << endl << count_odd;
    return 0;
}
