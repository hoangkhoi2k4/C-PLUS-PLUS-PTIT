#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll s[1001];

void f(){
	s[0] = 0, s[1] = 1;
	for(int i = 2; i < 1001; i++){
		s[i] = s[i-1] + s[i - 2];
		s[i] = s[i] % 1000000007;
}

}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		f();
		cout << s[n];
		cout << endl;
		
	}
}

