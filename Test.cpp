#include<fstream>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    fstream fs;
    fs.open("IN.in");

    int n = 0; 

    if (fs.is_open()) {
        fs >> n; 
        fs.close(); 
    }
    vector<int> a;
	while(n){
		int x = n % 2;
		n /= 2;
		a.push_back(x);
	}
	for(int i = a.size() - 1; i >= 0; i-- ){
		cout << a[i];
	}
    return 0;
}

