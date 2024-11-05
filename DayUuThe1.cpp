#include <iostream>
#include <vector>

using namespace std;

bool Uuthe(vector<int>& v) {
	int c = 0 , l = 0;
	int n = v.size();
	
	for(int i = 0 ; i < n; i++) {
		if(v[i] % 2 == 0) {
			c++;
		} else {
			l++;
		}
	}
	
	// ktra uu the chan
	
	if(n%2 == 0 && c > l) {
		return true;
	}
	
	// ktra uu the le
	
	if(n%2 == 1 && l > c) {
		return true;
	}
	
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t-- ) {
		vector<int> v;
		
		int n;
		while(cin >> n) {
			v.push_back(n);
			
			if(cin.peek() == '\n') break;
		}
		
		if(Uuthe(v)) cout << "YES" ;
		else cout << "NO";
		cout << endl;
	}
	
	return 0;
}
