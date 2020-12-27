#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

void merge(vector<int>& a, vector<int> l, vector<int> r, int li, int ri)
{
	int i = 0, j = 0, k = 0;
	while(i < li && j < ri)
		a[k++] = (l[i] <= r[j]) ? l[i++] : r[j++];
	while(i < li)
		a[k++] = l[i++];
	while(j < ri)
		a[k++] = r[j++];
}

void printSorted(vector<vector<int>> mat, int n)
{
	vector<int> ans(n*n);
	for(int i = 0; i < n; i++)
		ans[i] = mat[0][i];
	for(int i = 1; i < n; i++)
		merge(ans, ans, mat[i], i*n, n);
	for(auto i : ans)
		cout << i << " ";
}

int main()
{
	fast_io;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<vector<int>> mat(n, vector<int>(n));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> mat[i][j];
		printSorted(mat, n);
		cout << "\n";
	}
	return 0;
}
