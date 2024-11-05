#include <iostream>
#include <vector>
using namespace std;

void nt(vector<bool> &snt, int n) {
    
    for (int i = 0; i <= n; i++) {
        snt[i] = true;
    }
    snt[0] = snt[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (snt[i]) {
            for (int j = i * i; j <= n; j += i) {
                snt[j] = false;
            }
        }
    }
}


void in(int a, int b) {
    vector<bool> snt(b + 1);
    nt(snt, b);
    for (int i = a; i <= b; i++) {
        if (snt[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a>b) {
    	int tmp = a;
    	a = b;
    	b = tmp;
	}
    in(a, b);
    return 0;
}
