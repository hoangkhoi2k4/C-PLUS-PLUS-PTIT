#include <bits/stdc++.h>

using namespace std;

string add(string a, string b){
	if(a.length() < b.length() ) swap(a, b);
	int n = a.length(), m = b.length();
	
	b = string(n - m, '0') + b;
	string res ="";
	int nho = 0;
	for(int i = n - 1; i >= 0 ; i--){
		int tmp = (a[i] - '0') + (b[i] - '0') + nho;
		nho = tmp/10;
		tmp%=10;
		
		res = to_string(tmp) + res;
	}
	if(nho) res = to_string(nho) + res;
	return res;
}

int main(){
	int t; cin >> t;
	while(t--) {
		string a, b; cin >> a >> b;
		
		cout << add(a, b) << endl;
	}
	return 0;
}
