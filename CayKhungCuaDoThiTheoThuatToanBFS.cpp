#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <utility>

using namespace std;

vector<pair<int, int>> res;
bool used[10001];

void bfs(int s, vector<int> adj[]) {
	queue<int> q;
	q.push(s);
	used[s] = true;
	while(!q.empty()) {
		int t = q.front();
		q.pop();
		for(auto x : adj[t]) {
			if(!used[x]) {
				q.push(x);
				used[x] = true;
				res.push_back({t, x});
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, e, u;
		cin >> n >> e >> u;
		memset(used, false, sizeof(used));
		vector<int> adj[10001];
		for(int i = 1; i <= e; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		res.clear();
		memset(used, false, sizeof(used));
		bfs(u, adj);

		if(res.size() == n - 1) {
			for(auto x : res) {
				cout << x.first << " " << x.second << endl;
			}
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}
