#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int main()
{
	fast_io;
	int m, n;
	cin >> m >> n;
	vector<vector<int>> mat(m, vector<int>(n));
	unordered_map<int, int> fre;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> mat[i][j];
			if(i == 0)
				fre[mat[i][j]]++;
			else
			{
				if(fre[mat[i][j]] == i)
				{
					fre[mat[i][j]]++;
					if(i == m-1)
						cout << mat[i][j] << " ";
				}
			}
		}
	}
	return 0;
}