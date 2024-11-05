#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;

int checkSNT(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) return 0;
    }
    return n > 1;
}

int main() {
    int t;
    cin >> t;

vector<long long> count(1000001);

for (int i = 2; i <= 1000000; i++) {
    if (checkSNT(i)) {
        count[i] = 1;
    }
}

while (t--) {
    long long L, R;
    cin >> L >> R;

    int cnt = 0;

    for (long long i = sqrt(L); i <= sqrt(R); i++) {
        if (count[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
	}

return 0;
}

