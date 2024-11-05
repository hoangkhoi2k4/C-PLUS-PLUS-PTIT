#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int a[n];
		
		for(int i = 0 ; i < n; i++) {
			s[i] = toupper(s[i]);
		}
		
		for(int i = 0 ; i < n; i++) {
			switch(s[i]) {
				case 'A':
					a[i] = 2;
					break;
				case 'B':
					a[i] = 2;
					break;
				case 'C':
					a[i] = 2;
					break;
					
				case 'D':
					a[i] = 3;
					break;
					
				case 'E':
					a[i] = 3;
					break;
				case 'F':
					a[i] = 3;
					break;
				case 'G':
					a[i] = 4;
					break;
				case 'H':
					a[i] = 4;
					break;
				case 'I':
					a[i] = 4;
					break;
				case 'J':
					a[i] = 5;
					break;
				case 'K':
					a[i] = 5;
					break;
				case 'L':
					a[i] = 5;
					break;
				case 'M':
					a[i] = 6;
					break;
				case 'N':
					a[i] = 6;
					break;
				case 'O':
					a[i] = 6;
					break;
				case 'P':
					a[i] = 7;
					break;
				case 'Q':
					a[i] = 7;
					break;
				case 'R':
					a[i] = 7;
					break;
				case 'S':
					a[i] = 7;
					break;
				case 'T':
					a[i] = 8;
					break;
				case 'U':
					a[i] = 8;
					break;
				case 'V':
					a[i] = 8;
					break;
				case 'W':
					a[i] = 9;
					break;
				case 'X':
					a[i] = 9;
					break;
				case 'Y':
					a[i] = 9;
					break;
				case 'Z':
					a[i] = 9;
					break;
			}
		}
		int ok = 1;
		for(int i = 0; i < n ; i++) {
			if(a[i] != a[n-i-1]) {
				ok = 0;
				break;
			}
		}
		
		if(ok == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

