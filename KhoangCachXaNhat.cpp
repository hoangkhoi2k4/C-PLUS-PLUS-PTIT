#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long int> M(n),N(n+1,INT_MIN);
        for (int i = 0; i < n; i++) {
            cin >> M[i];
        }
        for (int i = n - 1; i >= 0; i--)N[i] = max(N[i + 1], M[i]);
		int rs = INT_MIN;
        for (int i = 0; i < n; i++) {
            int low = i + 1, high = n - 1, ans = i;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (M[i] <= N[mid]) {
                    ans = max(ans, mid);
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
            rs = max(rs, ans - i);
        }
        if(rs != INT_MIN)
        	cout << rs << endl;
        else cout << -1 << endl;
		
	}
}

