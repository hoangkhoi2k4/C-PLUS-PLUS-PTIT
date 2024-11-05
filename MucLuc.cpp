#include <bits/stdc++.h>

using namespace std;

struct NK{
	string page, level, title;
};

int main(){
	vector<NK> list;
	string pa, s;
	fstream fs("VANBAN.txt");
	while(getline(fs, s)){
		NK tmp;
		if(s.substr(0, 4) == "Page"){
			pa = s.substr(5);
		}
		tmp.page = pa;
		if(s.substr(0, 5) == "Level"){
			tmp.level = s.substr(5, 1);
			tmp.title = s.substr(8);
			list.push_back(tmp);
		}
	}
	fs.close();
	fstream fs1("MUCLUC.txt");
	for(auto x : list) {
		if(x.level == "1"){
			fs1 << ">" << x.title << "--- " << x.page << endl;
		} else if(x.level == "2") {
			fs1 << ">>" << x.title << "--- " << x.page << endl;
		} else {
			fs1 << ">>>" << x.title << "--- " << x.page << endl;
		}
	}
	
	return 0;
}
