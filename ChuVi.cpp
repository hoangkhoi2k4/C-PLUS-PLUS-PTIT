#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int n, m;
int a[105][105];
bool visited[105][105];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool isValid(int x, int y) {
    return x >= 0 && x < n&& y >= 0 && y < m;
}

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[x][y] = true;
    int canh = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newX = p.first + dx[i];
            int newY = p.second + dy[i];

            if (isValid(newX, newY)) {
                if (a[newX][newY] == 1 && !visited[newX][newY]) {
                    visited[newX][newY] = true;
                    q.push({ newX, newY });
                }
                if (a[newX][newY] == 0) {
                    canh++;
                }
            }
            else {
                canh++;
            }
        }
    }

    return canh;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> p;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && !visited[i][j]) {
                p.push_back(bfs(i, j));
            }
        }
    }

    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }

    return 0;
}
