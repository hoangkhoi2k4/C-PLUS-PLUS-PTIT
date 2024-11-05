#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        double a[3],b[3],c[3],d[3];
        for(int i = 0 ; i < 4; i ++) {
            for(int j = 0; j < 3; j ++) {
                if(i == 0) cin >> a[j];
                else if(i == 1) cin >> b[j];
                else if(i == 2) cin >> c[j];
                else cin >> d[j];
            }
        }
        double ab[3] = { b[0] - a[0], b[1] - a[1], b[2] - a[2]};
        double ac[3] = { c[0] - a[0], c[1] - a[1], c[2] - a[2]};

    double bc[3] = {ac[1]*ab[2] - ac[2]*ab[1], ac[2]*ab[0]-ac[0]*ab[2], ac[0]*ab[1] - ac[1]*ab[0]};

    if(bc[0]*(d[0] - a[0]) + bc[1]*(d[1] - a[1]) + bc[2]*(d[2] - a[2]) == 0 ) {
        cout << "YES\n";
    } else cout << "NO\n";

}
return 0;
}

