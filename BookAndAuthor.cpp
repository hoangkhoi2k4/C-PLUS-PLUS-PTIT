#include <iostream>
#include <vector>

using namespace std;

class Author{
	public:
		string name, email, gt;
		void nhap(){
			getline(cin, name);
			getline(cin, email);
			getline(cin, gt);
		}
};

class Book{
	public: 
		string namebook;
		int gia, sl;
		vector<Author> v;
};

int main(){
	int n;
	cin >> n;
	cin.ignore();
	Book a[n];
	for(int i = 0; i < n; i++) {
		string tmp;
		getline(cin, tmp);
		getline(cin, a[i].namebook);
		cin >> a[i].gia;
		cin >> a[i].sl;
		int t;
		cin >> t;
		cin.ignore();
		
		for(int j = 0 ; j < t; j++) {
			Author m;
			m.nhap();
			a[i].v.push_back(m);
		}
		
	}
	
	for(int i = 0 ; i < n; i++) {
		cout << "-----------------------" << endl;
		cout << "Book information :" << endl;
		cout << "Name : " <<a[i].namebook << endl;
		cout << "Price : " << a[i].gia << endl;
		cout << "Quantity : " << a[i].sl << endl;
		cout << "Author information :" << endl;
		for(int k = 0 ; k < a[i].v.size() ; k++) {
			cout << "#" << k + 1 << endl;
			cout << "Name : " << a[i].v[k].name << endl;
			cout << "Email : " << a[i].v[k].email << endl;
			cout << "Gender : " << a[i].v[k].gt << endl;
		}
	}
	
	return 0;
}
