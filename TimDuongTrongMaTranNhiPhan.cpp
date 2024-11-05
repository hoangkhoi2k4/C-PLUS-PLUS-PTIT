#include <bits/stdc++.h>

using namespace std;
int n, m , rNum[] = {-1, 0 , 0 , 1}, cNum[] = {0, - 1, 1, 0};
int a[1005][1005];

struct Point{
	int x, y;
};

struct queueNode{
	Point pt;
	int dis;
};

bool check(int r, int c){
	return (r >= 0) && (r < n) && (c >= 0) && (c < m);
}

int BFS(Point start, Point end){
	if(!a[start.x][start.y] || !a[end.x][end.y]) return -1;
	bool visit[1005][2005] = {};
	visit[start.x][start.y] = 1;
	queue<queueNode> q;
	queueNode s = {start, 0};
	q.push(s);
	while(!q.empty()) {
		queueNode cur  = q.front();
		Point pt = cur.pt;
		if(pt.x == end.x && pt.y == end.y) return cur.dis;
		q.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int r = pt.x + rNum[i];
			int c = pt.y + cNum[i];
			
			if(check(r, c) && a[r][c] &&!visit[r][c]) {
				visit[r][c] = 1;
				queueNode tmp = { {r, c} , cur.dis + 1};
				q.push(tmp);
			}
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t, x, y, z , t_;
	cin >> t_;
	while(t_--) {
		cin >> n >> m >> x >> y >> z >> t;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				cin >> a[i][j];
			}
		}
		cout << BFS({x, y}, {z, t}) << endl;
	}
	
	return 0;
}
