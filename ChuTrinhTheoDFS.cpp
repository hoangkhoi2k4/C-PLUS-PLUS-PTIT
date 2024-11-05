#include <bits/stdc++.h>

using namespace std;

int n, e;
bool check;
bool used[1001] = {false};
vector<int> res;

void dfs(int s, int par, vector<int> adj[]){
	if(check) return;
	used[s] = true;
	for(auto x : adj[s]){
		if(x == 1 and x != par){
			check = true;
			return;
		}
		if(!used[x]){
			if(!check){
				res.push_back(x);
			}
			dfs(x, s, adj);
			if(!check) res.pop_back();
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		cin >> n >> e;
		vector<int> adj[1001];
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			sort(adj[i].begin(), adj[i].end());
		}
		memset(used, false, sizeof used);
		res.clear();
		check = false;
		dfs(1, 0, adj);
		if(!check or res.size() == 0) cout << "NO";
		else {
			cout << 1 << " ";
			for(auto x : res) cout << x << " ";
			cout << 1;
		}
		cout << endl;
	}	
	return 0;
}
