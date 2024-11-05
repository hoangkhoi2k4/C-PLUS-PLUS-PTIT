#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string a;
    cin >> a;
    
    vector<string> v;
    string tach = "";
    stringstream ss(s);
    while(ss >> tach) {
    	v.push_back(tach);
	}
	
	for(int i = 0 ; i < v.size(); i++) {
		if(v[i] != a) {
			cout << v[i] << " ";
		}
	}
    
    return 0;
}


