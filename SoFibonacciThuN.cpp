#include <iostream>
using namespace std;

unsigned long long fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    
    unsigned long long a = 1, b = 1, c;
    
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        cout << fibonacci(n) << endl;
    }
    
    return 0;
}


