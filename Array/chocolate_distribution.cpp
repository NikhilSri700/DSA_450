#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int minDiff(vector<int>& a, int& n, int& m)
{
	int mn = INT_MAX;
	for(int i = 0; i+(m-1) < n; i++)
		mn = min(mn, a[i+(m-1)] - a[i]);
	return mn;
}

int main()
{
	fast_io;
	int t; 
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cin >> m;
		sort(a.begin(), a.end());
		cout << minDiff(a, n, m) << "\n";
	}
	return 0;
}