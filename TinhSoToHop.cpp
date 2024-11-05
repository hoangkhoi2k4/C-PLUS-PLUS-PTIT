#include<iostream>
using namespace std;

const int p = 1000000007;


int find(int n, int r) {
    int c[n+1][r+1];

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= min(i, r); j++) {
            if(j == 0 || j == i)
                c[i][j] = 1;
            else
                c[i][j] = (c[i-1][j-1] + c[i-1][j]) % p;
        }
    }

    return c[n][r];
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, r;
        cin >> n >> r;

        long long res = find(n, r);
        cout << res << endl;
    }

    return 0;
}

