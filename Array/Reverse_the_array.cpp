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
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		for(int i = s.length()-1; i >= 0; i--)
			cout << s[i];
		cout << "\n";
	}

	return 0;
}