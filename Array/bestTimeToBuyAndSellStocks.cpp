#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int b = INT_MAX, mx = 0;
    for(int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < b)
            b = prices[i];           
        else
            mx = max(mx, prices[i]-b);
    }
    return mx;
}

int main()
{
	fast_io;
	int n; 
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << maxProfit(a);
	return 0;

}