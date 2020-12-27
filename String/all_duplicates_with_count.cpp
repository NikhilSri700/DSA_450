1#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

void countDup(string &s)
{
	unordered_map<char, int> mp;
	for(auto i : s)
		mp[i]++;
	for(auto i : mp)
		if(i.second > 1)
			cout << i.first << " " << i.second << "\n";
}

int main()
{
	fast_io;
	string s;
	cin >> s;
	countDup(s);
	return 0;
}
