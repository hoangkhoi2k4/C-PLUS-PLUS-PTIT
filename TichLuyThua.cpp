#include <iostream>

using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		ll x,y,p;
		cin >> x >> y >> p;
		ll s = x;
		for(int i = 1 ; i < y ; i++){
			s = (s*x)%p;
		}
		cout << s << endl;
	}
}

