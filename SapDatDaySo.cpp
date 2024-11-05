#include <iostream>
#include <set>

using namespace std;

typedef long long ll;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll a[n];
		set<ll> s;
		for(ll i = 0; i < n; i++)
		{
			ll e; cin >> e;
			s.insert(e);
			
			a[i] = i;
		}
		
		for(ll i = 0; i < n; i++)
		{
			//neu a[i] ko co trong s thi a[i] = -1
			if(!s.count(a[i])) a[i] = -1;
		}
		
		for(ll e : a) cout << e << " ";
		cout << endl;
	}
}

