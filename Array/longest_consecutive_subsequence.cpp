#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int findLongestConseqSubseq(vector<int>& a, int n)
{
	unordered_map<int, bool> check;
	for(int i = 0; i < n; i++)
		check[a[i]] = true;
	int mx = 1;
	for(int i = 0; i < n; i++)
	{
		int cur = 1, temp;
		if(check[a[i]] == false)
			continue;

		check[a[i]] = false;
		temp = a[i]-1;
		while(check[temp])
		{
			cur++;
			check[temp] = false;
			temp--;
		}
		temp = a[i]+1;
		while(check[temp])
		{
			cur++;
			check[temp] = false;
			temp++;
		}
		mx = max(mx, cur);
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
	cout << findLongestConseqSubseq(a, n);

	return 0;
}