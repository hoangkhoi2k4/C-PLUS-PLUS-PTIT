#include <iostream>
#include <math.h>

using namespace std;

int inspect(int n){
    int a = 0, b = 0;
    while (n) {
        if ((n % 10) % 2 == 0) {
            a++;
        } else {
            b++;
        }
        n /= 10;
    }
    if (a == b) {
        return 1;
    }
    return 0;
}

int main(){
    int n;
    int a = 1;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        if (inspect(i)) {
            cout << i << " ";
            a++;
            if (a % 10 == 1) {
                cout << endl;
            }
        }
    }
}


