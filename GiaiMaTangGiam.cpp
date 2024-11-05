#include <bits/stdc++.h>
using namespace std;

string kt(string s)
{
    string s1 = "1";
    int cnt = 1;
    string x;
    int a = 0;

	for (int i = 0; i < s.length(); i++)
	{
    	if (s[i] == 'D')
    	{
        	cnt++;
        	x = to_string(cnt);
        	s1.insert(a, x);
    	}
    	if (s[i] == 'I')
    	{
        	cnt++;
        	x = to_string(cnt);
        	s1 += x;
        	a = i + 1;
   		}
	}
	return s1;
}

int main()
{
    int t;
    cin >> t;
	while (t--)
	{
    	string s;
    	cin >> s;
    	cout << kt(s) << endl;
	}
	return 0;
}

