#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int main()
{
	fast_io;
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	unordered_map<int, int> fre;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		fre[a[i]]++;
	}
	for(auto i : fre)
		if(i.second > (n/k))
			cout << "Number = " << i.first << " Count = " << i.second << "\n";


	return 0;
}