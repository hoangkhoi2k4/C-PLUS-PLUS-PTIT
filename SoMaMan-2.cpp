#include <iostream>
#include <string>

using namespace std;

int chuyen(string num) {
    int sum = 0;
    for (char digit : num) {
        sum += digit - '0'; // 	Chuyen doi so thanh so nguyen va cong tong
    }
    return sum;
}

bool soMayMan(string num) {
    while (num.length() > 1) {
        int sum = chuyen(num);
        num = to_string(sum); // Gan n thanh tong moi tinh duoc
    }

    int sum = stoi(num); // Chuyen doi thanh so nguyen

    return sum == 9;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string n;
        cin >> n; 

        if (soMayMan(n)) {
            cout << "1" << endl; 
        } else {
            cout << "0" << endl; 
        }
    }

    return 0;
}


