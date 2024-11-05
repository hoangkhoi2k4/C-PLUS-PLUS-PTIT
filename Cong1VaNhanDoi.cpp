#include<bits/stdc++.h>

using namespace std;


#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


int n;
int a[1005];

int calc()
{
    int res = 0;
    while (1)
    {
        int cnt = 0, i;
        for(i = 0; i < n; ++i)
        { 
            if (a[i] & 1) break;
            else if (!a[i])  ++cnt;
        }
        if (cnt == n) return res;
        if (i == n)
        {
            for(int j = 0 ; j < n; j++) a[j] = a[j] / 2;
            ++res;
        }
        for(int j = i ; j <= n; j++)
        {
           if (a[j] & 1)
           {
              --a[j];
              ++res;
           }
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0 ; i < n; i++) cin >> a[i];
        cout << calc() << endl;
    }
    return 0;
}
