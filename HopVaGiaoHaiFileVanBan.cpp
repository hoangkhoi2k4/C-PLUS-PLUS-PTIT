#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ifstream in1("DATA1.in");
	ifstream in2("DATA2.in");
	set<string> s1;
	set<string> s2;
	string data;
	while(getline(in1, data))
	{
		stringstream ss(data);
		string tmp;
		while(ss >> tmp)
		{
			for(char& c : tmp) c = tolower(c);
			s1.insert(tmp);
		}
	}
	
	while(getline(in2, data))
	{
		stringstream ss(data);
		string tmp;
		while(ss >> tmp)
		{
			for(char& c : tmp) c = tolower(c);
			s2.insert(tmp);
		}
	}
	
	set<string> hop = s1;
	for(string e : s2) hop.insert(e);
	
	set<string> giao;
	for(string e : s2) 
	{
		if(s1.count(e)) giao.insert(e);
	}
	
	for(string e : hop) cout << e << " ";
	cout << endl;
	for(string e : giao) cout << e << " ";

}

