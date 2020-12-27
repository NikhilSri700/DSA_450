#include<bits/stdc++.h>
using namespace std;

void fast_io()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
}

int main()
{
	fast_io();
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int l = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			swap(a[i], a[l]);
			l++;
		}
	}
	for(auto i : a)
		cout << i << " ";
	return 0;
}
