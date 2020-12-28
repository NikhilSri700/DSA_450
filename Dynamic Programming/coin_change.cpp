class Solution
{
  public:
    long long int count( int s[], int m, int n )
    {
        vector<vector<long long int>> dp(m, vector<long long int>(n+1));
        sort(s, s+m);
        for(int i = 0; i < m; i++)
            dp[i][0] = 1;
        for(int i = 0; i < m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == 0)
                {
                    if(j%s[i] == 0)
                        dp[i][j]++;
                }
                else
                {
                    if(s[i] > j)
                        dp[i][j] = dp[i-1][j];
                    else
                        dp[i][j] = dp[i-1][j] + dp[i][j-s[i]];
                }
            }
        }
        return dp[m-1][n];
    }
};
