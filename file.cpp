#include <iostream>
#include <fstream>
#include <climits>
#include <vector>
#include <sstream>

using namespace std;
typedef long long ll;

int x = INT_MAX;

long long Sum(string s) {
    long long res = 0, res1 = 0;
    if(s.size() >= 10) return 0;
     for(int i = 0 ; i < s.size() ; i++) {
        if (isdigit(s[i])) {
            res = res*10 + (s[i] - '0');
        } else {
            res = 0;
            break;
        }
    }

    if(res != 0 && res < x) {
        res1 += res;
    }

    return res1;
}


int main(){
	fstream fs;
	fs.open("DATA.in");
	if(!fs.is_open()) {
		return 1;
	}
	
	vector<string> s;
	string v;
	while(getline(fs, v)){
		string s1 = "";
		stringstream ss(v);
		while(ss >> s1) {
			s.push_back(s1);
		}
		
	}
	fs.close();
	ll sum = 0;
	for(string x : s) {
		sum += Sum(x);
	}
	cout << sum ;
}

