#include <bits/stdc++.h>


using namespace std;

bool check(string a) {
	if(a.back() == '.' || a.back() == '?' || a.back() == '!') return 1;
	return 0;
}

void lower(string &a ){
	for(int i = 0 ; i < a.size() ; i++) {
		a[i] = tolower(a[i]);
	}
}

int main(){
	string s;
	vector<string> v;
	while(cin >> s) {
		v.push_back(s);
	}
	
	int ok = 1;
	for(auto x : v) {
		lower(x);
		if(ok) {
			x[0] = toupper(x[0]);
			ok =0;
		}
		if(check(x)){
			x.pop_back();
			cout << x << endl;
			ok = 1;
		}
		else {
			cout << x << " ";
		}
	}
	
	return 0;
}

