#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        char s[22];
        cin.getline(s, 22);

        int len = strlen(s);
        int a[22];
        for(int i = 0 ; i < len; i++) {
        	a[i] = s[i] - '0';
		}
        if ( a[len - 2] == 8 && a[len - 1] == 6) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }

    }

    return 0;
}


