#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

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
		int temp = a[n-1];
		for(int i = n-1; i > 0; i--)
			a[i] = a[i-1];
		a[0] = temp;
		for(auto i : a)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}