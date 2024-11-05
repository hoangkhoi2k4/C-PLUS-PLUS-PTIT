#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
class kh{
	public:
		string name,id,sex,date,add;
};
class mh{
	public:
		string id,name,unit;
		ll cost,price;
};
class hd{
	public:
		string id;
		int sl;
		kh x;
		mh y;
		void in(){
			cout<<this->id<<" "<<x.name<<" "<<x.add<<" "<<y.name<<" "<<y.unit<<" "<<y.cost<<" "<<y.price<<" "<<sl<<" "<<1ll*sl*y.price<<endl;
		}
};
int main(){
	ifstream in;
	in.open("KH.in");
	int n;
	in>>n;
	in.ignore();
	kh a[n+1];
	for(int i=1;i<=n;i++){
		getline(in,a[i].name);
		getline(in,a[i].sex);
		getline(in,a[i].date);
		getline(in,a[i].add);
		string tmp="KH";
		tmp+=to_string(i);
		if(tmp.size()==3) tmp.insert(2,"00");
		if(tmp.size()==4) tmp.insert(2,"0");
		a[i].id=tmp;
	}
	in.close();
	in.open("MH.in");
	int m;
	in>>m;
	mh b[m+1];
	for(int i=1;i<=m;i++){
		in.ignore();
		getline(in,b[i].name);
		getline(in,b[i].unit);
		in>>b[i].cost>>b[i].price;
		string tmp="MH";
		tmp+=to_string(i);
		if(tmp.size()==3) tmp.insert(2,"00");
		if(tmp.size()==4) tmp.insert(2,"0");
		b[i].id=tmp;
	}
	in.close();
	in.open("HD.in");
	int k;
	in>>k;
	hd c[k+1];
	in.ignore();
	for(int i=1;i<=k;i++){
		
		string tmp="HD";
		tmp+=to_string(i);
		if(tmp.size()==3) tmp.insert(2,"00");
		if(tmp.size()==4) tmp.insert(2,"0");
		c[i].id=tmp;
		string token,s;
		getline(in,s);
		stringstream ss(s);
		vector<string> v;
		while(ss>>token){
			v.push_back(token);
		}
		c[i].sl=stoi(token);
		for(int j=1;j<=n;j++){
			if(v[0]==a[j].id) {
				c[i].x=a[j];
				break;
			}
		}
		for(int j=1;j<=m;j++){
			if(v[1]==b[j].id){
				c[i].y=b[j];
				break;
			} 
		}
		
	}
	in.close();
	for(int i=1;i<=k;i++){
		c[i].in();
	}
}
