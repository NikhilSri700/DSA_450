#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

long long maxProduct(vector<int>& a, int n) 
{
	long long ans = 1, mx = 1, mn = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			mn = 1;
			mx = 1;
		}
	}
	return mx;
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	maxProduct(a, n);
	// cout << maxProduct(a, n);
	return 0;
}

/*-9 9 2 4 0 -2 9 3 9
-9 -81 -162 -648 0 -2 -18 -54 -486*/