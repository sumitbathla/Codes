class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        long long dp[n+1];
        for(int i=0; i<n+1; i++){
            dp[i] = 0;
        }
        dp[0] = 1;
        for(int i=0; i<m; i++){
            for(int j=S[i]; j<n+1; j++){
                dp[j] += dp[j - S[i]];
            }
        }
        
        return dp[n];
    }
};
