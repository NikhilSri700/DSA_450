#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
{
    int r = 0, c = m-1, ind = -1;
    while(r < n && c >= 0)
    {
        if(arr[r][c] == 1)
        {
            c--;
            ind = r;
        }
        else
            r++;
    }
    return ind;
}

int main()
{
	fast_io;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> mat(n, vector<int>(m));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> mat[i][j];
	cout << rowWithMax1s(mat, n, m);
	return 0;
}