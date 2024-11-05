#include <bits/stdc++.h>

using namespace std;

vector<string> a;

bool isDivisible(string s, int x) {
    int remainder = 0;
    for (char c : s) {
        remainder = (remainder * 10 + (c - '0')) % x;
    }
    return remainder == 0;
}

void init(){
	queue<string> q;
	q.push("6");
	q.push("8");
	a.push_back("6"); a.push_back("8");
	while(true){
		string x = q.front(); q.pop();
		if(x.length() >= 200) break;
		q.push(x + "6"); q.push(x + "8");
		a.push_back(x + "6");
		a.push_back(x + "8");
	}
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		bool check = true;
		for(string tmp : a){
//			if(isDivisible(tmp, x)){
//				cout << tmp << endl;
//				check = false;
//				break;
//			}
			cout << tmp << " ";
		}
//		if(check) cout << "-1\n";
	}
}
