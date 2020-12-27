#include<bits/stdc++.h>
using namespace std;

void fast_io()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(0);
}

class Solution
{
  public:
    int middle(int A, int B, int C)
    {
    	if (A < B)
        return (B < C)? B : max(A, C);
      return (A < C)? A : max(B, C);

    }
};

int main()
{
	fast_io();
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}
