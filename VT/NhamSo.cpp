#include <bits/stdc++.h>

using namespace std;

string add(string a, string b){
	if(a.length() < b.length()){
		swap(a, b);
	}
	int n = a.length(), m = b.length();
	string res = "";
	b = string(n - m, '0') + b;
	int nho = 0;
	for(int i = n - 1; i >= 0; i--){
		int tmp = (a[i] - '0') + (b[i] - '0') + nho;
		nho = tmp/10;
		tmp = tmp%10;
		res = res + to_string(tmp);
	}
	if(nho) res += to_string(nho);
	reverse(res.begin(), res.end());
	return res;
}

string minSum(string a, string b){
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '5'){
			a[i] = '3';
		}
	}
	for(int i = 0; i < b.length(); i++){
		if(b[i] == '5'){
			b[i] = '3';
		}
	}
	return add(a, b);
}

string maxSum(string a, string b){
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '3'){
			a[i] = '5';
		}
	}
	for(int i = 0; i < b.length(); i++){
		if(b[i] == '3'){
			b[i] = '5';
		}
	}
	return add(a, b);
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		cout << minSum(a, b) <<  " " << maxSum(a, b) << endl;
	}
	return 0;
}
