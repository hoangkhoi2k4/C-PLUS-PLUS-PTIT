#include <iostream>

using namespace std;
typedef long long ll;

int main(){
	ll b, p, t, k, dem , l, i;
	cin >> t;
	while(t--){
		cin >> b >> p;
		l = b/p, b%=p;
		k = 0;
		for( i = 1; i <= b; i++)
			if(i * i % p == 1) k++;
			dem = k; 
		for( i = b + 1 ; i < p ; i++) 
			if(i * i % p == 1) k++;
			dem += l*k;
		cout << dem << endl;
	}
	return 0;
}

