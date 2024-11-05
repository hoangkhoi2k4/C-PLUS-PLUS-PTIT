#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int, int>> res;
bool used[100001];

void dfs(int s, vector<int> adj[]) {
	used[s] = true;
	for(auto x : adj[s]) {
		if(!used[x]) {
			res.push_back({s, x});
			dfs(x, adj);
		}
	}
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		res.clear();
		int n,u, e;
		cin >> n >> e >> u;
		memset(used, false, sizeof(used));
		vector<int> adj[10001];
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		dfs(u, adj);
		if(res.size() == n - 1) {
			for(int i = 0; i < res.size(); i++) {
				cout << res[i].first << " " << res1[i].second << endl;
			}
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}
