#include<bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

int isPlaindrome(string S)
{
    if(S.length() == 1)
    return 1;
    for(int i = 0, j = S.length()-1; i < j; i++, j--)
        if(S[i] != S[j])
            return 0;
    return 1;
}

int main()
{
	fast_io;
	string s;
	cin >> s;
	(isPlaindrome(s)) ? cout << "Yes" : cout << "No";
	return 0;
}