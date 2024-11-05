#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> fibo(100001, "0");

string add(string a, string b) {
    if (a.length() < b.length()) swap(a, b);
    int n = a.length(), m = b.length();
    int nho = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n - m, '0');
    string res = "";
    for (int i = 0; i < n; i++) {
        int tmp = (a[i] - '0') + (b[i] - '0') + nho;
        res += (char)(tmp % 10 + '0');
        nho = tmp / 10;
    }
    if (nho) res += (char)(nho + '0');
    reverse(res.begin(), res.end());
    return res;
}

void init() {
    fibo[0] = "0";
    fibo[1] = "1";
    for (int i = 2; i <= 100000; i++) {
        fibo[i] = add(fibo[i - 1], fibo[i - 2]);
    }
}

int main() {
    int t;
    cin >> t;
    init();
    while (t--) {
        int n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}

