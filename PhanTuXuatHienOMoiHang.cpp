#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        set<int> se;
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            se.insert(a[i][j]);
        }
        for(auto x: se) {
            mp[x]++;
        }
    }
    int check = 0;
    for(auto x: mp) {
    	if(x.second == n) {
           	cout << x.first << " ";
           	check = 1;
		}
	}
    if (check == 0) 
    cout << "NOT FOUND";
}
