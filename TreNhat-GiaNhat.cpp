#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int day, month, year;
};

void Find(Person ds[], int n) {
    int y = 0;
    int o = 0;
    
    for (int i = 1; i < n; i++) {
        if (ds[i].year > ds[y].year) {
            y = i;
        } else if (ds[i].year == ds[y].year && ds[i].month > ds[y].month) {
            y = i;
        } else if (ds[i].year == ds[y].year && ds[i].month == ds[y].month && ds[i].day > ds[y].day) {
            y = i;
        }
        
        if (ds[i].year < ds[o].year) {
            o = i;
        } else if (ds[i].year == ds[o].year && ds[i].month < ds[o].month) {
            o = i;
        } else if (ds[i].year == ds[o].year && ds[i].month == ds[o].month && ds[i].day < ds[o].day) {
            o = i;
        }
    }
    
    cout << ds[y].name << endl;
    cout << ds[o].name << endl;
}

int main() {
    int N;
    cin >> N;
    Person ds[101];
    
    for (int i = 0; i < N; i++) {
        cin >> ds[i].name;
        char s;
        cin >> ds[i].day >> s >> ds[i].month >> s >> ds[i].year;
    }
    
    Find(ds, N);
    
    return 0;
}


