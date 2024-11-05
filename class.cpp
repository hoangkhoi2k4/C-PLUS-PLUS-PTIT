#include <iostream>

using namespace std;

class SinhVien {
	private: 
		string name, lop, age;
	public:
		
		SinhVien() {
		}
		
		string get_name(){
			return name;
		}
		
		void set_name(string _name) {
			name = _name;
		}
		
		string get_lop(){
			return lop;
		}
		
		void set_lop(string _lop) {
			lop = _lop;
		}
		
		string get_age(){
			return age;
		}
		
		void set_age(string _age) {
			age = _age;
		}
};

int main() {
	SinhVien s;
	
	cout << "Nhap ten cho sinh vien: " << endl;
	string a, b, c;
	getline(cin, a);
	
	s.set_name(a);
	
	cout << "Nhap lop cho sinh vien: " << endl;
	getline(cin, b);
	
	s.set_lop(b);
	
	cout << "Nhap tuoi cho sinh vien: " << endl;
	getline(cin, c);
	s.set_age(c);
	
	
	cout << "Ten: " << s.get_name() << endl << "Lop: " << s.get_lop() << endl << "Tuoi: " << s.get_age();
	return 0;
}
