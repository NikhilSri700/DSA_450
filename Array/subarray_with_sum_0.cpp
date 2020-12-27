#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

bool subArrayExists(vector<int> a, int n)
{
    vector<int> pre(n+1);
    unordered_map<int, int> fr;
    for(int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1]+a[i-1];
        fr[pre[i]]++;
        if(fr[pre[i]] > 1 || pre[i] == 0)
            return true;
    }
    return false;
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	(subArrayExists(a, n)) ? cout << "Yes" : cout << "No";
	return 0;
}