#include <bits/stdc++.h>
#include <set>

using namespace std;

typedef long long ll;

int cmp(int s1, int s2)
{
	string tmp1 = to_string(s1)+to_string(s2);
	string tmp2 = to_string(s2)+to_string(s1);
	
	return stoi(tmp1) > stoi(tmp2);
}

int main(){
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	
    	int a[n];
    	for(int& e : a) cin >> e;
    	sort(a, a+n, cmp);
    	
    	for(int e : a) cout << e;
    	cout << endl;
	}
}

