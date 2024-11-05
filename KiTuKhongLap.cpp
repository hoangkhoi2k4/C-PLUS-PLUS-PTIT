#include <iostream>
#include <string.h>

using namespace std;
int main() {
	int t;
	cin >> t;
	getchar();
	while(t--) {
		char s[100000];
		fgets(s,100000, stdin);
		int len = strlen(s);
		
		int ok = 1;
		for(int i = 0; i < len ;i ++) {
			for(int j = 0; j < len ; j ++) {
				if(i != j) {
					if((int)s[i] == (int)s[j]) {
					ok = 0;
				}
				}
			}
			if(ok == 1) cout << s[i];
			ok = 1;
		}
	}
}

