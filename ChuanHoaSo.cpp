//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	cin.ignore();
//	
//	while(t--) {
//		string s;
//		cin >> s;
//		int n = s.size();
//		int s1[n];
//		for(int i = 0 ; i < n; i++ ){
//			s1[n-i-1] = s[i] - '0';
//		}
//		
//		
//		string b;
//		for(int i = 0 ; i < n ; i++) {
//			if(i%3 == 0 && i!=0) {
//				b += ",";
//			}
//			b += to_string(s1[i]);
//		}
//		int x = b.size();
//		for(int i = x - 1; i >= 0 ; i--) {
//			cout << b[i];
//		}
//		cout << endl;
//	}
//
//	
//	return 0;
//}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convert(int h) {
    string s = to_string(h);
    int n = s.length();
    
    // Tính toán s? lu?ng d?u ph?y c?n du?c thêm vào
    int c = (n-1) / 3;
    
    // Thêm d?u ph?y vào chu?i
    for (int i = 0; i < c; i++) {
        int index = n - (i+1)*3;
        s.insert(index, ",");
    }
    
    return s;
}

int main() {
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;

    string s = convert(n);
    
    cout << "So da duoc dinh dang: " << s << endl;
    
    return 0;
}

