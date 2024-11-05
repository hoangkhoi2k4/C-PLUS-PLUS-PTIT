#include <bits/stdc++.h>
#define size 1000
using namespace std;

void tinhTich(string a, string b);

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string a,b, c;
        cin >> a >> b;
        tinhTich(a, b);
    }
    return 0;
}

void tinhTich(string a, string b){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    string c(a.length() + b.length(), '0');
    
    for(int i = 0 ; i < b.length(); i++) {
        int j, nho = 0;
        for(j = 0 ; j < a.length(); j++) {
            int x = (b[i] - '0') * (a[j] - '0') + nho + (c[i + j] - '0');
            c[i + j] = x % 10 + '0';
            nho = x / 10;
        }
        while (nho > 0) {
            c[i + j] = nho % 10 + '0';
            nho /= 10;
            j++;
        }
    }

    while (c.length() > 1 && c.back() == '0') {
        c.pop_back();
    }

    reverse(c.begin(), c.end());
    
    cout << c << endl;
}

