#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double S(int n, int x[], int y[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        sum += (x[i] * y[j] - x[j] * y[i]);
    }
    return abs(sum) / 2.0;
}

int main() {
    int t;
    cin >> t;
	while(t--) {
        int n;
        cin >> n;
        int x[n], y[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        double s = S(n, x, y);
        cout << fixed << setprecision(3) << s << endl;
    }
    return 0;
}

