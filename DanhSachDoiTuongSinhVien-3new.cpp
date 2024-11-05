#include <bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string ma;
		string name, clas, date;
		char name_x[100];
		float gpa;
	public:
		friend istream& operator>>(istream& in, SinhVien& p);
		friend ostream& operator<<(ostream& out, const SinhVien& p);
		friend bool haha(const SinhVien a, const SinhVien b);
};
int ui=1;
istream& operator>>(istream& in, SinhVien& p) {
	in.ignore();
	scanf(" %[^\n]", p.name_x);
    in.ignore();
    char* token = strtok(p.name_x, " ");
    while (token != NULL) {
        for(int i = 1; i < strlen(token); i++) 
			token[i] = tolower(token[i]);
        token[0] = toupper(token[0]);
        p.name += token;
        if (isalpha(token[strlen(token) - 1])) p.name += " ";
        token = strtok(NULL, " ");
    }
	in >> p.clas >> p.date >> p.gpa;
	if (p.date[1] == '/') p.date = '0' + p.date;
	if (p.date[4] == '/') p.date.insert(3, "0");
	if(ui<10) {
		p.ma = "B20DCCN00" + to_string(ui);
		ui++;
	} else {
		p.ma = "B20DCCN0" + to_string(ui);
		ui++;
	}
	return in;
}
bool haha(const SinhVien a, const SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep (SinhVien a[], int n) {
	sort (a, a+n, haha);
}
ostream& operator << (ostream& out, const SinhVien& p) {
	out << p.ma << " " << p.name << p.clas << " " << p.date << " ";
	out << fixed << setprecision(2) << p.gpa << endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
