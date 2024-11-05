#include<iostream>
#define MAX 10000
using namespace std;

int X[MAX], a[MAX], n, k, N, cnt = 0, sum = 0, count = 0;

void init()
{
	cout << "Nhap N = ";
	cin >> N;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap k = ";
	cin >> k;
	cout << "Nhap mang a co n ptu: ";
	for(int i = 1; i <= n; ++i) cin >> a[i];
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
		cnt++;
		X[cnt] = a[j];
		sum += a[j];
		
		if(cnt == k && sum == N) print();
		else if(cnt < k) tryAt(j+1);
		
		sum -= a[j];
		cnt--;
	}
}

int main()
{
    init();
    tryAt(1);
}
