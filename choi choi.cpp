#include <iostream>
#include <string>

using namespace std;

char a[3] = {'A', 'B', 'C'};
string s;
int n;

bool check() {
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'A') {
			cnt1++;
		} else if(s[i] == 'B') {
			cnt2++;
		} else cnt3++;
	}
	if(cnt1 > cnt2 || cnt2 > cnt3 ||cnt1 > cnt3|| cnt1 == 0 || cnt2 == 0|| cnt3 == 0) return false;
	return true;
}

void Try(int i) {
	for(int j = 0; j < 3; j++) {
		s[i] = a[j];
		if(check())
			cout << s << endl;
		else if (i < n) Try(i + 1);
	}
}

int main() {
	cin >> n;
	for(int i = 0; i <= n; i++) {
		s.clear();
		s.resize(i);
		Try(0);
	}
	return 0;
}

