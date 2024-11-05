#include <iostream>
#include <string.h>

using namespace std;

int kiemtra(char a[] ) {
	int i = 0;
	int n = strlen(a)-1;
	while (i<n) {
		int x = a[i] - '0';
		if(x%2==1) {
			return 0;
		}
		i++;
		n--;
	}
	return 1;
}
int main() {
	int t;
	char a[501];
	scanf("%d",&t);
	while (t--) {
		scanf("%s",a);
		if(kiemtra(a)) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

