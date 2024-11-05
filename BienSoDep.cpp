#include <iostream>

using namespace std;

 bool asc(string a){
 	if(a[5] < a[6] && a[6] < a[7] && a[7] < a[9] && a[9] < a[10]) return true;
 	return false;
 }
 
 bool eq(string a ) {
 	bool check1 = false, check2 = false;
 	
 	if(a[5] == a[6] && a[6] == a[7]) check1 = true;
 	if(a[9] == a[10]) check2 = true;
 	
 	if(check1 && check2) return true;
 	
 	return false;
 	
 }
 
 bool pr(string a) {
 	if(a[5] != '6'&& a[5] != '8') return false;
 	if(a[6] != '6'&& a[6] != '8') return false;
 	if(a[7] != '6'&& a[7] != '8') return false;
 	if(a[9] != '6'&& a[9] != '8') return false;
 	if(a[10] != '6'&& a[10] != '8') return false;
 	return true;
 }
 
 int main() {
 	int t;
 	cin >> t;
 	cin.ignore();
 	while(t--) {
 		string s;
 		cin >> s;
 		if(asc(s) || eq(s) || pr(s)) cout << "YES\n"; else cout <<"NO\n";
	 }
 }
 
 

