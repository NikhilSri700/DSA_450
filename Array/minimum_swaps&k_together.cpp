#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int minSwaps(vector<int>& a, int n, int k)
{
	int c = 0, cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= k)
		{
			a[i] = 1;
			cnt++;
		}
		else
			a[i] = 0;
	}
	int mx = 0;
	for(int i = 0; i+(cnt-1) < n; i++)
	{
		int cur = 0;
		for(int j = i; j < i+cnt; j++)
		{
			if(a[j] == 1)
				cur++;
		}
		mx = max(mx, cur);
	}
	return cnt-mx;
}

int main()
{
	fast_io;
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cin >> k;
		cout << minSwaps(a, n, k) << "\n";
	}
	return 0;
}
