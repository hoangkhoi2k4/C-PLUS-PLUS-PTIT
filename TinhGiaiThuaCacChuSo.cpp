#include<bits/stdc++.h>
using namespace std;

int main() {
    int c[10] = {0};
    int t;
    cin >> t;

	while (t--) {
    	int a;
    	char b;
    	cin >> a;

		while (a--) {
    		cin >> b;

    		if (b == '1') {
        		continue;
    	}

    		if (b == '2' || b == '3' || b == '5' || b == '7') {
        		c[b - '0']++;
    	}

    		if (b == '4') {
        		c[2] += 2;
        		c[3]++;
    	}
	
    		if (b == '6') {
        		c[5]++;
        		c[3]++;
    	}

    		if (b == '8') {
       		 	c[7]++;
        		c[2] += 3;
    	}

    		if (b == '9') {
        		c[7]++;
        		c[3] += 2;
        		c[2]++;
    	}
	}

	for (int i = 9; i > 1; i--) {
    	while (c[i] > 0) {
        	cout << i;
        	c[i]--;
    	}
	}

	cout << endl;
	}
}

