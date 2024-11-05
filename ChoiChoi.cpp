#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> v;

void Try(int st, int sum, vector<int> a){
    if(sum == n) {
        for(int x : a ) cout << x << " ";
        cout << endl;
        v.push_back(a);
    }
    for(int i = st ; i >= 0; i--) {
        if(sum + i <= n && i >= 0) {
            a.push_back(i);
            Try(i - 1, sum + i, a);
            a.pop_back();
        }
    }
}

int main(){
    cout << "Nhap n: ";
    cin >> n;
    vector<int> a;
    Try(n - 1, 0, a);
    return 0;
}

