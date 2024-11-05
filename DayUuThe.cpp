#include <iostream>
#include <vector>
using namespace std;

bool Uuthe(vector<int>& arr) {
    int c = 0, l = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            c++;
        else
            l++;
    }

    // Kiem tra dieu kien cua day uu the chan
    if (n % 2 == 0 && c > l)
        return true;

    // Kiem tra dieu kien cua day uu the le
    if (n % 2 != 0 && l > c)
        return true;

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int num;

        // Doc cac so nguyen duong cho den khi gap ki tu xuong dong
        while (cin >> num) {
            arr.push_back(num);

            // Kiem tra ki tu ket thuc dong de xac dinh so luong phan tu trong day
            if (cin.peek() == '\n')
                break;
        }

        if (Uuthe(arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}


