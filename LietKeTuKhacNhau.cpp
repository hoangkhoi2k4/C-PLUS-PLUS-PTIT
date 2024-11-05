#include <iostream>
#include <fstream>
#include <set>
#include <sstream>

using namespace std;

int main()
{
	ifstream in("VANBAN.in");
	set<string> s;
	string data;
	while(getline(in, data))
	{
		stringstream ss(data);
		string tmp;
		while(ss >> tmp) 
		{
			for(char& c : tmp) c = tolower(c);
			s.insert(tmp);
		}
	}
	
	for(string e : s) cout << e << endl;

}

