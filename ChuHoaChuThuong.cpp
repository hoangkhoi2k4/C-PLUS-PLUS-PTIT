#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a;
        cin >> a;
        
        if ('A' <= a && a <= 'Z') {  // Kiem tra neu la chu hoa
            a += 32;  // Chuyen doi sang chu thuong bang cach cong 32 vao ma ASCII
        }
        else if ('a' <= a && a <= 'z') {  // Kiem tra neu la chu thuong
            a -= 32;  // Chuyen doi sang chu hoa bang cach tru 32 tu ma ASCII
        }
        
        cout << a << endl;
    }
    
    return 0;
}


