#include <iostream>

using namespace std;

int check(string s){
	int n =  s.size(), mu = 1, sum = 0;
	for(int i = n - 1; i >= 0 ; i--) {
		sum += (s[i] - '0')*mu;
		mu*=2;	
		sum%=10;
		mu%=10;
	
	}
	if(sum%5==0) {
		return 1;
	}else return 0;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin ,s);
		if(check(s)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}

