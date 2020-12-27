#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

void merge_Onxm(vector<int>& a, vector<int>& b, int n, int m);  // time O(n*m) space O(1)
void merge_ONlogN(vector<int>& a, vector<int>& b, int n, int m); // time O((n+m)log(n+m)) space O(1);

int nextg(int g)
{
	if(g <= 1)
		return 0;
	else 
		return (g/2) + (g%2);
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	// merge_Onxm(a, b, n, m);
	merge_ONlogN(a, b, n, m);
	for(auto i : a)
		cout << i << " ";
	for(auto i : b)
		cout << i << " ";

	return 0;

}

void merge_Onxm(vector<int>& a, vector<int>& b, int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] > b[0])
		{
			swap(a[i], b[0]);
			if(b[0] > b[1])
			{
				int temp = b[0];
				int j = 1;
				while(b[j] < temp && j != m)
				{
					b[j-1] = b[j];
					j++;
				}
				b[j-1] = temp;
			}
		}
	}
}

void merge_ONlogN(vector<int>& a, vector<int>& b, int n, int m)
{
	int i, j, g = n+m;
	for(g = nextg(g); g > 0; g = nextg(g))
	{
		for(i = 0; i+g < n; i++)
			if(a[i] > a[i+g])
				swap(a[i], a[i+g]);
		j = g > n ? g-n : 0;
		while(i < n && j < m)
		{
			if(a[i] > b[j])
				swap(a[i], b[j]);
			i++;
			j++;
		}
		if(j < m)
		{
			for(j = 0; j + g < m; j++)
				if(b[j] > b[j+g])
					swap(b[j], b[j+g]);
		}
	}
}