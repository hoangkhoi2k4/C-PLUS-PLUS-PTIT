#include<iostream>
#define MAX 10000
using namespace std;

int X[MAX], a[MAX], n, k, cnt = 0, count = 0;

void init()
{
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap k = ";
	cin >> k;
	cout << "Nhap mang a co n ptu: ";
	for(int i = 1; i <= n; ++i) cin >> a[i];
	X[0] = INT_MIN;
}

void print()
{
	cout << "Cau hinh thu " << ++count << " : ";
	for(int i = 1; i <= k; ++i) 
		cout << X[i] << " ";
	cout << "\n";
}

void tryAt(int i)
{
	for(int j = i; j <= n; ++j)
	{
		if(a[j] > X[cnt])
		{
			cnt++;
			X[cnt] = a[j];
			
			if(cnt == k) print();
			else if(cnt < k) tryAt(j+1);
			
			cnt--;
		}
		
	}
}

int main()
{
    init();
    tryAt(1);
}
