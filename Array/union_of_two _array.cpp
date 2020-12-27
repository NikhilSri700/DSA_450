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
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m), ans;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		int c[100001];
		memset(c, 0, sizeof(c));
		for(int i = 0; i < n; i++)
		{
			if(!c[a[i]])
			{
				ans.push_back(a[i]);
				c[a[i]] = 1;
			}
		}
		for(int i = 0; i < m; i++)
		{
			if(!c[b[i]])
			{
				ans.push_back(b[i]);
				c[b[i]] = 1;
			}
		}
		cout << ans.size() << "\n";
		ans.clear();
	}
	return 0;
}