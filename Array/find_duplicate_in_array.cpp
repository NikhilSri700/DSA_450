#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

int findDup(vector<int>& nums)
{
	int tor = nums[nums[0]], hare = nums[nums[nums[0]]];
    while(hare != tor)
    {
        tor = nums[tor];
        hare = nums[nums[hare]];
    } while(hare != tor);
        
    hare = nums[0];
    while(tor != hare)
    {
        tor = nums[tor];
        hare = nums[hare];
    }
    return tor;
}

int main()
{
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i = 0; i <= n; i++)
		cin >> a[i];
	cout << findDup(a);
	
	return 0;
}