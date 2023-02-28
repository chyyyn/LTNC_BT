#include <iostream>
using namespace std;

void TongDoi(int n, int arr[]);

int main()
{
    int n;
    cout <<
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    TongDoi(n, arr);
    return 0;
}

void TongDoi(int n, int arr[])
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                cout << arr[i] << " & " << arr[j] << ".";
                return;
            }
        }
    }
    cout << "Khong tong tai";
    return 0;
}
