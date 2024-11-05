#include <iostream>
#include <map>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt = 0;
		map<int, int> mp;
		for(int i = 0; i < n; i++)
		{
			int e; cin >> e;
			mp[e]++;
		}
		
		for(pair<int, int> p : mp) if(p.second > 1) cnt += p.second;
		cout << cnt << endl;
	}

    return 0;
}


