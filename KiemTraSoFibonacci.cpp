#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long a[101];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    while (t--)
    {
        long long n;
        cin >> n;
        int kt = 0;
        for (int i = 0; i < 100; i++)
        {
            if (a[i] == n)
            {
                kt = 1;
                cout << "YES";
                break;
            }
        }
        if (kt == 0)
            cout << "NO";
        cout << endl;
    }
    return 0;
}
