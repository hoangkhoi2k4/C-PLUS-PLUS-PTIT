#include <iostream>
#include <cmath>

using namespace std;

class soPhuc{
	private:
		int thuc;
		int ao;
	public:
		soPhuc() {
			
		}
		
		void set_soPhuc(int _thuc, int _ao) {
			thuc = _thuc;
			ao = _ao;
		}
		
		void print() {
			if(ao > 0) {
				cout << "So phuc ket qua la: "<< thuc << " + " << ao << "i" << endl;
			} else {
				cout << "So phuc ket qua la: "<< thuc << " - " << abs(ao) << "i" << endl;
			}
		}
		
		friend void addTwoSoPhuc(soPhuc a, soPhuc b);
		
		~soPhuc() {
			
		}
};

void addTwoSoPhuc(soPhuc a, soPhuc b){
	soPhuc c;
	c.thuc = a.thuc + b.thuc;
	c.ao = b.ao + a.ao;
	c.print(); 
}

int main() {
	soPhuc a,b,c;
	int thuc1 , thuc2, ao1, ao2;
	cout << "Nhap gia tri phan thuc cho so phuc thu nhat: ";
	cin >> thuc1;
	cout << "Nhap gia tri phan ao cho so phuc thu nhat: ";
	cin >> ao1;
	cout << "Nhap gia tri phan thuc cho so phuc thu hai: ";
	cin >> thuc2;
	cout << "Nhap gia tri phan ao cho so phuc thu hai: ";
	cin >> ao2;
	a.set_soPhuc(thuc1, ao1);
	b.set_soPhuc(thuc2, ao2);
	addTwoSoPhuc(a,b);
	
	return 0;
}
