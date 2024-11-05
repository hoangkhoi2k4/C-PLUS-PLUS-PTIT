#include <iostream>
#include <vector>

using namespace std;

void sortArray(vector<long long>& arr) {
    int n = arr.size();
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sortArray(arr);

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


