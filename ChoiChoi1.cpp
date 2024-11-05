#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	
	ifstream is("DATA.in");
	is >> n ;
	is >> m;
	map<int, int> s;	int x;
	for(int i = 0 ; i < n; i++) {
		is >> x;
		s[x]++;
	}
	set<int> se;
	for(int i = 0 ; i < m;i++){
		is >> x;
		if(s[x]){
			se.insert(x);
		}
	}
	is.close();
	
	for(auto  i: se){
		cout << i << " ";
	}
	return 0;
}
