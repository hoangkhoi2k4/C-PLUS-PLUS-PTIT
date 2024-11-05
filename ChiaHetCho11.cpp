#include <iostream>
#include <string>

using namespace std;

bool check(const string& num) {
    int sum = 0; 

    for (int i = num.length() - 1; i >= 0; i -= 2) {
        int a = num[i] - '0'; 
        if (i - 1 >= 0) {
            a += (num[i - 1] - '0') * 10; 
        }
        sum += a;
    }

    return sum % 11 == 0;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string num;
        cin >> num;

        bool a = check(num);
        cout << (a ? 1 : 0) << endl;
    }

    return 0;
}

