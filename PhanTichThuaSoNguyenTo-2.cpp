#include <iostream>
#include <math.h>
using namespace std;

const int MAX = 100000; 
int a[MAX]; // luu tru so nguyen to
int cnt = 0; 


bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// ham tao cac so nguyen to nho hon MAX
void nt() {
    for (int i = 2; i < MAX; i++) {
        if (snt(i)) {
            a[cnt++] = i;
        }
    }
}

// ham phan tich thua so nguyen to
void PTTSNT(int n) {
    
    if (snt(n)) {
        cout << n << " " << 1 << endl;
        return;
    }
  
    int dem, index = 0;
   
    while (n > 1 && a[index] <= sqrt(n)) {
        dem = 0;
        while (n % a[index] == 0) {
            dem++;
            n /= a[index];
        }
       
        if (dem) {
            cout << a[index] << " " << dem << endl;
        }
      
        index++;
    }
    
    if (n > 1) {
        cout << n << " " << 1 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    nt(); 
    PTTSNT(n);
    return 0;
}


