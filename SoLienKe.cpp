#include <iostream>
#include <cmath>

using namespace std;

int slk(string x){
	int m = x.size();
	for(int i = 0 ; i < m-1 ; i++){
		if(abs(x[i+1] - x[i]) != 1) {
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string n;
		cin >> n;
		if(slk(n) == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

