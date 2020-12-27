#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int water(vector<int>& a, int n)
{
	int mx = *max_element(a.begin(), a.end()), curMax = a[0], diff = 0, i, ans = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < curMax)
			diff += (curMax-a[i]);
		else
		{
			ans += diff;
			diff = 0;
			curMax  = a[i];
		}
		if(a[i] == mx)
			break;
	}
	if(i < n-1)
	{
		curMax = a[n-1], diff = 0;
		for(int j = n-2; j >= i; j--)
		{
			if(a[j] < curMax)
				diff += (curMax - a[j]);
			else
			{
				ans += diff;
				diff = 0;
				curMax = a[j];
			}
		}
	}
	return ans;

}

int main()
{
	fast_io;
	int t; 
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cout << water(a, n) << "\n";
	}
	return 0;
}