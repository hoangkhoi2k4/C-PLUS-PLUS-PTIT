#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
bool cmp(pi a, pi b){
	if(a.fi != b.fi)
		return a.fi < b.fi;
	else return a.se < b.se;
}
 
 #define endl "\n"
 
void TC(){
	int n,m; cin >> n >> m;
	int a[n][m];
	FOR(i, 0, n){
		FOR(j, 0, m){
			cin >> a[i][j];
		}
	}
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
	while(h1 < h2 && c1 < c2){
		int pre = a[h1+1][c1];
		for(int i = c1 ; i <= c2; i++){
			int cur = a[h1][i];
			a[h1][i] = pre;
			pre = cur;
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			int cur = a[i][c2];
			a[i][c2] = pre;
			pre = cur;
		}
		c2--;
		if(h1<=h2){
			for(int i = c2 ; i>= c1; i--){
				int cur = a[h2][i];
				a[h2][i] = pre;
				pre = cur;
			}
			h2--;
		}
		if(c1 <= c2){
			for(int i = h2 ; i >= h1 ;i--){
				int cur = a[i][c1];
				a[i][c1] = pre;
				pre = cur;
			}
			c1++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j]<<" ";
		}
	}
	cout << endl;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		TC();
	}
}

