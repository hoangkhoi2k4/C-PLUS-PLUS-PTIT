#include <bits/stdc++.h>

using namespace std;

struct TieuMuc{
	string page, level, title;
};

int main(){
	vector<TieuMuc> v;
	fstream fs("VANBAN.txt");
	string page, s;
	while(getline(fs, s)){
		if(s.substr(0, 4) == "Page"){
			page = s.substr(5);
		} if(s.substr(0, 5) == "Level") {
			TieuMuc tmp;
			tmp.page = page;
			tmp.level = s.substr(5, 1);
			tmp.title = s.substr(8);
			v.push_back(tmp);
		}
	}
	fs.close();
	fstream fs1("MUCLUC.txt");
	for(int i = 0; i < v.size();i++) {
		if(v[i].level == "1"){
			fs1 << ">" << v[i].title << "--- " << v[i].page << endl;
		} else if(v[i].level == "2") {
			fs1 << ">>" << v[i].title << "--- " << v[i].page << endl;
		} else {
			fs1 << ">>>" << v[i].title << "--- " << v[i].page << endl;
		}
	}
	fs1.close();
	
	return 0;
}
