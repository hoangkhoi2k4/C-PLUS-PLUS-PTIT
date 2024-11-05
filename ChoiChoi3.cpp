#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
	
	string s;
	getline(cin , s);
	int n = s.size();
	for(int i = 0 ; i < n ; i++) {
		s[i] = tolower(s[i]);
	}
	
	string w = "";
	stringstream ss(s);
	while(ss >> w) {
		v.push_back(w);
	}
	string a ="";
	for(int i = 0 ; i < v.size() - 1; i++){
		a = v[i];
		a[0] = toupper(a[0]);
		if(i != v.size() - 2 ){
			cout << a << " ";
		} else{
			cout << a << ", ";
		}
	}
	
	a = v[v.size() - 1];
	for(int i = 0 ; i < a.size() ; i++) {
		a[i] = toupper(a[i]);
	}
	cout << a ;
	
	return 0;
}
