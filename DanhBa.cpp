#include <bits/stdc++.h>

using namespace std;

struct DanhBa{
	string ho, name, date, sdt;
};

bool cmp(DanhBa a, DanhBa b){
	if(a.name == b.name) {
		return a.ho < b.ho;
	}
	return a.name < b.name;
}

int main(){
	vector<DanhBa> v;
	fstream fs("SOTAY.txt");
	string date, s;
	while(getline(fs, s)){
		if(s.substr(0, 4) == "Ngay"){
			date = s.substr(5);
		} else {
			DanhBa tmp;
			tmp.date = date;
			stringstream ss(s);
			vector<string> name_;
			string x;
			while(ss >> x){
				name_.push_back(x);
			}
			for(int i = 0; i < name_.size() - 1; i++) {
				tmp.ho = tmp.ho + name_[i] + " ";
			}
			tmp.name = name_[name_.size() - 1];
			getline(fs, tmp.sdt);
			
			v.push_back(tmp);
		}
	}
	fs.close();
	sort(begin(v), end(v) , cmp);
	fstream fs1("DIENTHOAI.txt");
	for(int i = 0 ; i < v.size() ; i++) {
		fs1 << v[i].ho << v[i].name << ": " << v[i].sdt << " " << v[i].date << endl;
	}
	fs1.close();
	
	return 0;
}
