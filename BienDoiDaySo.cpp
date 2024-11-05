#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int r = 0, l = n - 1;
        int cnt = 0;
        while (r <= l){
            if (a[r] == a[l]){
                r++;
                l--;
            }
            else if(a[r] < a[l]){
                r++;
                a[r] = a[r] + a[r - 1];
                cnt++;
            }
            else{
                l--;
                a[l] = a[l] + a[l + 1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}



