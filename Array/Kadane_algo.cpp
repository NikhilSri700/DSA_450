#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int cursum = a[0], mx = a[0];
	for(int i = 1; i < n; i++)
	{
		cursum = max(cursum + a[i], a[i]);
		mx = max(cursum, mx);
	}
	cout << mx;
	return 0;
}