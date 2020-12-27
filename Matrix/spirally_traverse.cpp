#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); 

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
	vector<int> ans;
	int r1 = 0, r2 = r-1, c1 = 0, c2 = c-1, b = 0;
	while(r2 >= r1 && c2 >= c1)
	{
		for(int i = c1; i < c2; i++)
		{
			if(matrix[r1][i] != -1)
			{
				ans.push_back(matrix[r1][i]);
				matrix[r1][i] = -1;
			}
		}
		for(int i = r1; i < r2; i++)
		{
			if(matrix[i][c2] != -1)
			{
				ans.push_back(matrix[i][c2]);
				matrix[i][c2] = -1;
			}
		}
		for(int i = c2; i > c1; i--)
		{
			if(matrix[r2][i] != -1)
			{
				ans.push_back(matrix[r2][i]);
				matrix[r2][i] = -1;
			}
		}
		for(int i = r2; i > r1; i--)
		{
			if(matrix[i][c1] != -1)
			{
				ans.push_back(matrix[i][c1]);
				matrix[i][c1] = -1;
			}
		}
		if(matrix[r1][c1] != -1)
			ans.push_back(matrix[r1][c1]);
		r1++;
		c1++;
		r2--;
		c2--;
	}
	return ans;
}

int main()
{
	fast_io;
	int r, c;
	cin >> r >> c;
	vector<vector<int>> mat(r, vector<int>(c));
	for(int i = 0; i < r; i++)
		for(int j = 0; j < c; j++)
			cin >> mat[i][j];
	vector<int> ans = spirallyTraverse(mat, r, c);
	for(auto i : ans)
		cout << i << " ";
	return 0;
}