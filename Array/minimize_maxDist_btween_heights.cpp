#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

int getMinDiff(vector<int>& a, int n, int k)
{
	sort(a.begin(), a.end(), greater<int>());
	int small = a[n-1]+k;
    int big = a[0]-k;
	if(small > big)
		swap(small,big);
	for(int i = n-1; i > 0; i--)
	{
		int add = a[i] + k;
		int sub = a[i] - k;
		if(sub >= small || add <= big)
			continue;
		else if((big - sub) <= (add - small))
			small = sub;
		else
			big = add;
	}
	return min(a[0]-a[n-1],big - small);
}

int main()
{
	fast_io;
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << getMinDiff(a, n , k);
	return 0;
	
}