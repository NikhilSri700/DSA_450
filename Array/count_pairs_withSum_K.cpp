#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

int getPairsCount(int arr[], int n, int k) 
{
    int cnt = 0;
    unordered_map<int, int> fre;
    for(int i = 0; i < n; i++)
        fre[arr[i]]++;
    
    int two = 0;
    for(int i = 0; i < n; i++)
    {
        two += fre[k-arr[i]];
        if(k-arr[i] == arr[i])
            two--;
    }
    return two/2;
}

int main()
{
	fast_io;
	int n, k;
	cin >> n >> k;
	int *a = new int[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << getPairsCount(a, n, k);

	return 0;
}