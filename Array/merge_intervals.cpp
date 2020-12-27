#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

bool comp(vector<int>& a, vector<int>& b)
{
    return (a[0] > b[0]);
}

vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    sort(intervals.begin(), intervals.end(), comp);
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    int j = 0;
    for(int i = 1; i < intervals.size(); i++)
    {
        if(intervals[i][0] > ans[j][1])
        {
            ans.push_back(intervals[i]);
            j++;
        }
        else if(intervals[i][1] > ans[j][1])
            ans[j][1] = intervals[i][1];
    }
    return ans;
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<vector<int>> inter(n, vector<int>(2));
	for(int i = 0; i < n; i++)
		cin >> inter[i][0] >> inter[i][1];
	inter = merge(inter);
	for(int i = 0; i < inter.size(); i++)
		cout << inter[i][0] << " " << inter[i][1] << endl;

	return 0;
}