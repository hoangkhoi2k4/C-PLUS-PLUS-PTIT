#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int b[10] = {0}; 
        
        for (int i = 0; i < n; i++) {
            int m = 0;
            m = a[i];
            while (m > 0) {
                b[m % 10] = 1; 
                m /= 10; 
            }
        }
        
        for (int i = 0; i < 10; i++) {
            if (b[i] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}


