#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int main()
{
	fast_io;
	int t; 
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a;
		a.push_back(1);
		for(int i = 2; i <= n; i++)
		{
			int mul, carr = 0, rem;
			for(int j = 0; j < a.size(); j++)
			{

				mul = i*a[j] + carr;
				rem = mul%10;
				carr = mul/10;
				a[j] = rem;
			}
			while(carr)
			{
				a.push_back(carr%10);
				carr /= 10;
			}
		}
		reverse(a.begin(), a.end());
		for(auto i : a)
			cout << i;
		cout << "\n";

	}
	return 0;
}