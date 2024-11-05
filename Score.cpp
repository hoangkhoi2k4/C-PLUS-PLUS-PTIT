#include <bits/stdc++.h>

using namespace std;

struct DoiBong{
	int diem, hieuso;
};

bool cmp(pair<string, DoiBong> a, pair<string, DoiBong> b){
	if(a.second.hieuso != b.second.hieuso){
		return a.second.hieuso > b.second.hieuso;
	}
	return a.first < b.first;
}

int main(){
	string s;
	map<string, DoiBong> mp;
	while(getline(cin, s)){
		string Team1 = "", Team2 = "";
		int x = 0, y = 0;
		
		stringstream ss(s);
		string w;
		vector<string> v;
		while(getline(ss, w, '-')){
			v.push_back(w);
		}
		
		v[0].pop_back();
		int index = v[0].length() - 1;
		while(isdigit(v[0][index])){
			index--;
		}
		
		x = stoi(v[0].substr(index));
		Team1 = v[0].substr(0, index + 1);
		
		v[1].erase(0, 1);
		
		index = 0;
		while(isdigit(v[1][index])){
			index++;
		}
		y = stoi( v[1].substr(0, index + 1));
		Team2 =  v[1].substr(index+1);
		
		if(mp.count(Team1) == 0){
			mp[Team1].hieuso = mp[Team1].diem = 0;
			
		}
		if(mp.count(Team2) == 0){
			mp[Team2].hieuso = mp[Team2].diem = 0;
			
		}
		
		mp[Team1].hieuso += x;
		mp[Team2].hieuso += y;
	}
	vector<pair<string, DoiBong>> v;
	for(auto it : mp) {
		v.push_back(it);
	}
	sort(begin(v), end(v), cmp);
	
	for(auto it : v){
		cout << it.first <<" " << it.second.hieuso << endl;
	}
	
	return 0;
}
