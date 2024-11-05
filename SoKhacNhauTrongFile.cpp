#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main(){
    ifstream fs("DATA.in");

    map<int, int> m;
    int num;
    while(fs >> num) {
        m[num]++;
    }
    fs.close();

    for(const auto &pair : m){
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}

