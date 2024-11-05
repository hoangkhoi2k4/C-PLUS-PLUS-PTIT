#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Company {
    string code;
    string name;
    int numStudents;

    bool operator < (const Company& cmp) const {
        if (numStudents == cmp.numStudents) {
            return code < cmp.code;
        }
        return numStudents > cmp.numStudents;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Company> companies(n);

    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, companies[i].code);
        getline(cin, companies[i].name);
        cin >> companies[i].numStudents;
    }

    sort(companies.begin(), companies.end());

    for (int i = 0; i < n; i++) {
        cout << companies[i].code << " " << companies[i].name << " " << companies[i].numStudents << endl;
    }

    return 0;
}
