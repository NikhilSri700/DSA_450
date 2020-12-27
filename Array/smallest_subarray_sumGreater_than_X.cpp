#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int subArray(vector<int>& a, int n, int x)
{
	vector<int> pre(n);
	pre[0] = a[0];
	for(int i = 0; i < n; i++)
		pre[i] = pre[i-1]+a[i];
	int mn = INT_MAX;
	if(pre[0] > x)
		return 1;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(i == j)
			{
				if(pre[i] > x)
					mn = min(mn, i+1);
			}
			else if(pre[j]-pre[i] > x)
			{
				mn = min(mn, j-i);
			}
		}
	}
	return mn;
}


int main()
{
	fast_io;
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cout << subArray(a, n, x) << "\n";
	}
	return 0;
}