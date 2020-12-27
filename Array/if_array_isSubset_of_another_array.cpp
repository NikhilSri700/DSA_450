#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);


int main()
{
	fast_io;
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		unordered_map<int, int> fre;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			fre[a[i]]--;
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			fre[b[i]]++;
		}
		int f = 0;
		for(auto i : fre)
			if(i.second > 0)
			{
				cout << "No \n";
				f = 1;
				break;
			}
		if(!f)
			cout << "Yes \n";

	}
	return 0;
}