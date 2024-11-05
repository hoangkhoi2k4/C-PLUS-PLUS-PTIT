#include <bits/stdc++.h>
 
// phan tu nho nhat thu k cua ma tran
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, tmp;
		vector<int> v;
		cin >> n >> k;
		int l = n * n;
		for (int i = 0; i < l; i++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		cout << v[k - 1] << endl;
	}
	return 0;
}

