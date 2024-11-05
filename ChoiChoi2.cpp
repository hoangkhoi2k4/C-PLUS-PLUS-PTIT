#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; getline(cin, s);
    for(char &c : s){
    	c = tolower(c);
	}
	
	string res = "";
	stringstream ss(s);
	vector<string> v;
	while(ss >> res){
		res[0] = toupper(res[0]);
		v.push_back(res);
	}
	for(auto x : v) {
		cout << x << " ";
	}
}

