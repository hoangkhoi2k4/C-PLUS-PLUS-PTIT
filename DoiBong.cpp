#include <bits/stdc++.h>

using namespace std;

struct DoiBong{
	int diem, hieuso;
};

bool cmp(pair<string, DoiBong> a, pair<string, DoiBong> b){
	if(a.second.diem != b.second.diem){
		return a.second.diem > b.second.diem;
	}
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
		
		int i = 1;
		while(s[i] != ']'){
			Team1 += s[i];
			++i;
		}
		
		i+=2;
		while(s[i] != ' ') {
			x += x*10 + (s[i] - '0');
			i++;
		}
		i+= 3;
		while(s[i] != ' ') {
			y += y*10 + (s[i] - '0');
			i++;
		}
		
		i+= 2;
		while(i < s.size()- 1){
			Team2 += s[i];
			++i;
		}
		if(mp.count(Team1) == 0){
			mp[Team1].hieuso = mp[Team1].diem = 0;
			
		}
		if(mp.count(Team2) == 0){
			mp[Team2].hieuso = mp[Team2].diem = 0;
			
		}
		
		if(x > y) {
			mp[Team1].diem += 3;
		} else if(x < y) {
			mp[Team2].diem += 3;
		} else {
			mp[Team1].diem += 1; mp[Team2].diem +=1;
		}
		
		mp[Team1].hieuso += x - y;
		mp[Team2].hieuso += y - x;
	}
	vector<pair<string, DoiBong>> v;
	for(auto it : mp) {
		v.push_back(it);
	}
	sort(begin(v), end(v), cmp);
	
	for(auto it : v){
		cout << it.first <<" " << it.second.diem << " " << it.second.hieuso << endl;
	}
	
	return 0;
}
