class Solution {
public:
  
    int numRollsToTarget(int N, int K, int target) {
       vector<vector<int>>dp(N+1,vector<int>(target+1,0));
        
       dp[0][0]=1;
        for(int n=1;n<=N;n++)
        {
          for(int x=1;x<=target;x++)
          {
              int mod=1e9+7;
        int way=0;
              
              for(int i=1;i<=K;i++)
              {
                  if(x-i>=0)
                   way=(way+dp[n-1][x-i])%mod;
              }
              dp[n][x]=way;
          }
        }
        
        return dp[N][target];
       
    }
};