#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    if(matrix.empty() || matrix[0].empty())
        return false;
    vector<int> first_col;
    for(int i = 0; i < matrix.size(); i++)
        first_col.push_back(matrix[i][0]);

    int idx = upper_bound(first_col.begin(), first_col.end(), target) - first_col.begin();

    if(idx == 0)
        return false;

    idx--;
    return binary_search(matrix[idx].begin(), matrix[idx].end(), target);
}

int main()
{
	fast_io;
	int m, n, x;
	cin >> m >> n;
	vector<vector<int>> mat(m, vector<int>(n));
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> mat[i][j];
	cin >> x;
	(searchMatrix(mat, x)) ? cout << "Found" : cout << "Not Found";
	return 0;
}