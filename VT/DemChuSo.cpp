#include <map>
#include <iostream>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a,   b; cin >> a >> b;
		if(a > b) swap(a, b);
		map<char, int> m;
		for(int i = a; i <= b; i++){
			string x = to_string(i);
			for(char c : x){
				m[c] ++;
			}
		}
		for(pair<char, int> x : m){
			cout << x.second << " ";
		}
		cout << endl;
	}
	return 0;
}
