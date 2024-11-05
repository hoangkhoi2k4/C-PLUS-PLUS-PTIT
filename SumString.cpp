#include <bits/stdc++.h>

using namespace std;

string cong(string a, string b){
	if(a.length() < b.length()) swap(a, b);
	int n = a.length(), m = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	b += string(n - m, '0');// them n - m so 0 vao cuoi b;
	string res = "";
	int nho = 0;
	for(int i = 0 ; i < n; i++) {
		int tmp = (a[i] - '0') + (b[i] - '0') + nho;
		res += (char)(tmp%10 + '0');
		nho = tmp /= 10;
	}
	
	if(nho) res += (char)(nho + '0');
	reverse(res.begin(), res.end());
	return res;
	
}

bool check(string s, int l , int len1 , int len2){
	string s1 = s.substr(l , len1);
	string s2 = s.substr(l + len1, len2);
	string s3 = cong(s1, s2);
	if(s3.length() > s.length() - l - len1 - len2) return false;
	if(s3 == s.substr(l + len1 +len2 ,s3.length())){
		if(s.length() == l + len1 + len2 + s3.length()) return true;
		return check(s, l + len1, len2, s3.length());
	}
	
	return false;
}

void solve() {
	string s; cin >> s;
	for(int i = 1; i < s.length() ; i++) {
		for(int j = 1; j <= s.length() - i ; j++) {
			if(check(s, 0, i , j)){
				cout << "Yes\n";
				return;
			}
		}
	}
	cout << "No\n";
}
int main(){
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
