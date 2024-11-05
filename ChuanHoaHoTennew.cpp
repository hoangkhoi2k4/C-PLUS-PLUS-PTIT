#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string inHoa(string s){
	int n = s.size();
	for(int i = 0 ; i < n ; i++) {
		s[i] = tolower(s[i]);
	}
		s[0] = toupper(s[0]);	
	return s;
}


void chuanHoa1(string s){
	vector <string> v;
	
	string s1 = "";
	stringstream ss(s);
	
	while(ss >> s1){
		v.push_back(s1);
	}
	
	cout << inHoa(s1) << " ";
	for(string x : v){
		x = inHoa(x);
		if(x != inHoa(s1))
		cout << x << " ";
	}
	cout << endl;
	
	
}

void chuanHoa2(string s){
	vector <string> v;
	
	string s1 = "", s3 = "";
	stringstream ss(s);
	
	while(ss >> s1){
		s3 = s1;
		break;
	}
	string s2 ="";
	
	while(ss >> s2){
		v.push_back(s2);
	}
	
	for(string x : v){
		x = inHoa(x);
		if(x != inHoa(s3))
		cout << x << " ";
	}
	cout << inHoa(s3) << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		
		string s;
		getline(cin ,s);
		
		switch(n){
			case 1:
				chuanHoa1(s);
				break;
			case 2:
				chuanHoa2(s);
				break;
		}
	}
	return 0;
}

