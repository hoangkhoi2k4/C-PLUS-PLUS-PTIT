#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(char a, char b){
    if(!isdigit(a) && !isdigit(b)){ 
        return a < b; 
    }
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--) {
		string s;
		getline(cin, s);
		
		int n = s.size();
	    char x[n];
	    int h = 0;
	    long sum = 0;
	    for(int i = 0 ; i < n ; i++) {
	    	if(s[i] >= '0' && s[i] <= '9') {
	    		sum += s[i] - '0';
			}
			else {
				x[h] = s[i];
				h++;
			}
		}
		sort(x,x+h,cmp);
		
		for(int i = 0 ; i < h ; i++) {
			cout << x[i];
		}
		cout << sum;
		cout << endl;
		
	}
	return 0;
}

