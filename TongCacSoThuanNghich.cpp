#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool check(ll n) {
   ll d = n;
   ll dao = 0;
   while(d) {
   		int x = d % 10;
   		d/=10;
   		dao = dao * 10 + x;
   }
   
   if(n == dao) return true;
   else return false;
}

int main() {
    int n;
    cin >> n;

    ll a = pow(10, n - 1);
    ll b = pow(10, n) - 1;

    ll sum = 0;
    for (ll num = a; num <= b; num++) {
        if (check(num)) {
            sum += num;
        }
    }

    cout << sum << endl;

    return 0;
}

