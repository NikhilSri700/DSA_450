#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

bool isSum(vector<int>& a, int s, int e, int x)
{
	for(int i = s, j = e; i < j;)
	{
		if(a[i]+a[j] == x)
			return true;
		if(a[i]+a[j] < x)
			i++;
		else if(a[i]+a[j] > x)
			j--;
	}
	return false;
}

int isTriplet(vector<int>& a, int& n, int& k)
{
	if(n < 3)
		return 0;
	for(int i = 0; i < n-2; i++)
	{
		if(isSum(a, i+1, n-1, k-a[i]))
			return 1;
	}
	return 0;
}

int main()
{
	fast_io;
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		cout << isTriplet(a, n, k) << "\n";
	}
	return 0;
}