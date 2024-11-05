#include <bits/stdc++.h>

using namespace std;
struct Email;
struct Email{
	string name, date;
};

void solve(Email &e){
	string tmp = "", res = "";
	stringstream ss(e.name);
	vector<string> v;
	while(ss >> tmp){
		for(char &c : tmp){
			c = tolower(c);
		}
		v.push_back(tmp);
	}
	e.date = v[v.size() - 1];
	
	res += v[v.size() - 2];
	for(int i = 0 ; i < v.size() - 2; i++) {
		res += v[i][0];
	}
	e.name = res;
	
	e.date.erase(2,1);
	e.date.erase(4,1);
	if(e.date[0] == '0'){
		e.date.erase(0,1);
		if(e.date[1] == '0'){
			e.date.erase(1,1);
		}
	} else if(e.date[2] == '0'){
		e.date.erase(2,1);
	}
}
map<string, int> m;
int main(){
	
	int n; cin >> n;
	cin.ignore();
	Email a[n];
	vector<string> v;
	for(int i = 0 ; i < n; i++){
		getline(cin, a[i].name);
		solve(a[i]);
//		cout << a[i].date << endl;
		v.push_back(a[i].name);
	}
	for(int i = 0 ; i < n; i++) {
		if(m[a[i].name] == 0) {
			cout << a[i].name << "@xyz.edu.vn" << endl << a[i].date << endl;
		} else {
			cout << a[i].name << m[a[i].name]+1 <<"@xyz.edu.vn" << endl << a[i].date << endl;
		}
		m[a[i].name]++;
	}
	
	
	return 0;
}
