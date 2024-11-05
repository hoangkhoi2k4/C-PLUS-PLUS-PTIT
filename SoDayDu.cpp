#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
	int i;
    while(n--) {
        string s;
        getline(cin, s);
        int kt = 0, n = s.size(), a[1001] = {0};

        for ( i = 0; i < n; i++) {
            if (s[i] < '0' || s[i] > '9') {
                kt = 1;
            }
        }

        if (s[0] == '0' || kt) {
            printf("INVALID\n");
            continue;
        }

        for ( i = 0; i < n; i++) {
            if (a[s[i]]==0) {
                a[s[i]] = 1;
                kt++;
            }
        }

        if (kt == 10) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


