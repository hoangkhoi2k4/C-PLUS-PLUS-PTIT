#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int code;
		cin >> code;
		getchar();
		char a[16];
		for(int i = 0; i < 15 ; i++) {
			cin >> a[i];
		}
		
		char b[16] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char c[16] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		
		int count;
		double result;
		
		switch(code) {
			case 101:
				count = 0;
				for(int i = 0; i < 15 ; i++) {
					if(a[i] == b[i]) {
						count++;
					}
				}
				result = count*(10.0/15);
				printf("%.2lf\n",result);
				break;
			case 102:
				count = 0;
				for(int i = 0; i < 15 ; i++) {
					if(a[i] == c[i]) {
						count++;
					}
				}
				result = count*(10.0/15);
				printf("%.2lf\n",result);
				break;
		}
	}
	return 0;
}


