#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

void reverseString(vector<char>& s) 
{
	if(s.size() == 1)
		return;
	for(int i = 0, j = s.size()-1; i < j ; i++, j--)
		swap(s[i], s[j]);
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<char> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	reverseString(a);
	for(auto i : a)
		cout << i;
	return 0;
}