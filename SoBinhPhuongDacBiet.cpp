#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main() {
	long long a, l  = 0, r = 0;
	cin >> a;
	string s = "";
	s = to_string((long long)pow(a, 2));
	
	if ( a== 1) {
		cout <<"YES\n";
		return 1;
	}
	int check = 0;
	if(s.size() % 2 == 0 ) {
		for(int i = 0 ; i < s.size()/2; i++) {
			l = l*10 + (s[i] - '0');
		}	
		for(int i = s.size()/2 ; i < s.size(); i++) {
			r = r*10 + (s[i] - '0');
		}
		
		if(l + r == a) {
			check = 1;
		}
	} else {
		check = 0;
	}
	
	
	if(check == 1) cout <<"YES\n";
	else cout << "NO\n";
}
