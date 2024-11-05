#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};

void input(Point& p) {
    cin >> p.x >> p.y;
}

double distance(Point A, Point B) {
    double dx = B.x - A.x;
    double dy = B.y - A.y;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}


