#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> result(n, vector<int>(m, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        // T?o ma tr?n k?t qu?
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    for (int k = 0; k < n; k++) {
                        result[k][j] = 1;
                    }
                    for (int k = 0; k < m; k++) {
                        result[i][k] = 1;
                    }
                }
            }
        }
        
        // In ma tr?n k?t qu?
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}


