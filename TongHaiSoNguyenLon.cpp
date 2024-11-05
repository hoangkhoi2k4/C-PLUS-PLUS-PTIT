#include <bits/stdc++.h>

using namespace std;

string add(string &a, string &b){
	string res = "";
	while(a.length() < b.length()) a = "0" + a;
	while(b.length() < a.length()) b = "0" + b;
	
	int r = 0;
	
	for(int i = a.length() - 1; i >=0 ; i--) {
		int tmp = a[i] - '0' + b[i] - '0' + r;
		r = tmp / 10;
		tmp = tmp%10;
		res = (char) (tmp + '0') + res;
	}
	
	if(r > 0) res = "1" + res;
	return res;
}

void solve(){
	string a, b;
	cin >> a >> b;
	cout << add(a , b) << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t; 
	while(t--){
 		solve();
	}	
	return 0;
}
