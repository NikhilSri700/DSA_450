#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

void nextpermu(vector<int>& a)
{
	int n = a.size(), i , j;
	for(i = n-2; i >= 0; i--)
		if(a[i] < a[i+1])
			break;
	if(i < 0)
		reverse(a.begin(), a.end());
	else
	{
		for(j = n-1; j >= 0; j--)
			if(a[i] < a[j])
			{
				swap(a[i], a[j]);
				break;
			}
		reverse(a.begin()+i+1, a.end());
	}
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	nextpermu(a);
	for(auto i : a)
		cout << i << " ";
	return 0;
}