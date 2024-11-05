#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		map<char, int> mp;
		int len = s.length();
		for(int i = 0 ; i < len ; i++) {
			mp[s[i]]++;
		}

    	int Max = 0;
    	int sum = 0;
    	for ( auto x : mp) {
        	if (x.second > Max) {
            	Max = x.second;
        	}
        	sum += x.second;
    	}

    	int result = sum - Max;
    	
    	if(Max - result >= 2) {
    		cout << "0\n";
		} else {
			cout << "1\n";
		}
	}

    return 0;
}

