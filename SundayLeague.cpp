#include <bits/stdc++.h>

using namespace std;

struct DoiBong {
	string ma;
	int tran, diem, hieuso;
};

bool cmp(pair<string, DoiBong> a, pair<string, DoiBong> b) {
	if(a.second.diem == b.second.diem) {
		if(a.second.hieuso == b.second.hieuso) {
			return a.first < b.first;

		}
		return a.second.hieuso > b.second.hieuso;
	}
	return a.second.diem > b.second.diem;
}

int main() {
	string s;
	map<string, DoiBong> mp;
	for(int i = 0; i < 20 ; i++) {
		string tmp1, Team, tmp2;
		getline(cin, tmp1);
		DoiBong a;
		getline(cin, a.ma);
		getline(cin, Team);
		string s;
		getline(cin, s);
		stringstream ss(s);
		string w;
		vector<string> v;
		while(ss >> w) {
			v.push_back(w);
		}
		a.tran = stoi(v[0]);
		a.hieuso = stoi(v[1]);
		a.diem = stoi(v[2]);

		mp[Team] = a;
		getline(cin, tmp2);

	}
	while(getline(cin, s)) {
		string Team1 = "", Team2 = "";
		int x = 0, y = 0;

		stringstream ss(s);
		string w;
		vector<string> v;
		while(getline(ss, w, '-')) {
			v.push_back(w);
		}

		v[0].pop_back();
		int index = v[0].length() - 1;
		while(isdigit(v[0][index])) {
			index--;
		}

		x = stoi(v[0].substr(index));
		Team1 = v[0].substr(0, index );

		v[1].erase(0, 1);

		index = 0;
		while(isdigit(v[1][index])) {
			index++;
		}
		y = stoi( v[1].substr(0, index + 1));
		Team2 =  v[1].substr(index+1);

		if(x > y) {
			mp[Team1].diem += 3;
		} else if(x < y) {
			mp[Team2].diem += 3;
		} else {
			mp[Team1].diem += 1;
			mp[Team2].diem +=1;
		}

		mp[Team1].hieuso += x - y;
		mp[Team2].hieuso += y - x;
		
		mp[Team1].tran++;
		mp[Team2].tran++;
	}
	vector<pair<string, DoiBong>> v;
	for(auto it : mp) {
		v.push_back(it);
	}
	sort(begin(v), end(v), cmp);
	int i = 1;
	for(auto it : v) {
		cout << "#" << i << " " << it.second.ma << " "<< it.first << " " << it.second.tran << " " << it.second.hieuso <<" " << it.second.diem << endl;
		cout << "------------------" << endl;
		++i;
	}

	return 0;
}
