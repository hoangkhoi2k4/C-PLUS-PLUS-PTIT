#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        cards[i] = make_pair(a, b);
    }

    int max_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = (cards[i].first * 10 + cards[j].first) + (cards[i].second * 10 + cards[j].second);
            max_sum = max(max_sum, sum);
        }
    }

    cout << max_sum << endl;
    return 0;
}

