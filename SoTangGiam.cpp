#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int checkSNT(ll n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0) return 0;
	}
	return n > 1;
}

int checkT(ll n)
{
	while(n >= 10)
	{
		int r = n%10;
		if(r <= (n/10)%10) return 0;
		n /= 10;
	}
	return 1;
}

int checkG(ll n)
{
	while(n >= 10)
	{
		int r = n%10;
		if(r >= (n/10)%10) return 0;
		n /= 10;
	}
	return 1;
}

ll a[100000], cnt = 0;
void init()
{
	for(ll i = 10000000; i <= 99999999; i++)
	{
		if(checkT(i)||checkG(i))
		{
			if(checkSNT(i)) a[cnt++] = i;
		}
	}
}

int main() {
//	int res[] = {0, 0, 20, 38, 50, 38, 20, 8, 5, 0};
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        ll l = pow(10, n-1), r = pow(10, n)-1;
        int cnt = 0;
		for(ll i = l; i <= r; i++)
		{
			if(checkT(i)||checkG(i))
			{
				if(checkSNT(i)) cnt++;
			}
		}
		
		cout << cnt << endl;
    }
    
    return 0;
}

