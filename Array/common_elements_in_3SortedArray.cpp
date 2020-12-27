#include<bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;

vector<int>commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
    {
        int i = 0, j = 0, k = 0;
        set<int> ans;
        while(i < n1 && j < n2 && k < n3)
        {
            if(a[i] < b[j] && c[k] < b[j])
            {
                i++;
                k++;
            }
            else if(a[i] < c[k] && b[j] < c[k])
            {
                i++;
                j++;
            }
            else if(c[k] < a[i] && b[j] < a[i])
            {
                j++;
                k++;
            }
            else if((a[i] < b[j] && c[k] == b[j]) || (a[i] < c[k] && c[k] == b[j]))
                i++;
            else if((b[j] < c[k] && a[i] == c[k]) || (b[j] < a[i] && a[i] == c[k]))
                j++;
            else if((c[k] < a[i] && b[j] == a[i]) || (c[k] < b[j] && a[i] == b[j]))
                k++;
            else if(a[i] == b[j] && b[j] == c[k])
            {
                ans.insert(a[i]);
                i++;
                j++;
                k++;
            }
        }
        vector<int> res;
        for(auto i = ans.begin(); i != ans.end(); i++)
            res.push_back(*i);
        return res;
    }

 int main()
 {
 	int a[] = {1, 5, 10, 20, 40, 80} , b[] = {6, 7, 20, 80, 100}, c[] = {3, 4, 15, 20, 30, 70, 80, 120};
 	vector<int> an = commonElements(a, b, c, 6, 5, 8);
 	for(auto i : an)
 		cout << i << " ";
 	return 0;
 }