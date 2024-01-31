class Solution {
public:
    int solve(int n,int k,int x,vector<vector<int>>&dp)
    {
        if(n==0 && x==0) return 1;
        if(n!=0 && x<=0) return 0;
        if(n==0 && x!=0) return 0;
        
        if(dp[n][x]!=-1) return dp[n][x];
        
        int mod=1e9+7;
        int way=0;
        for(int i=1;i<=k;i++)
        {
           way=(way+solve(n-1,k,x-i,dp))%mod;
        }
        return dp[n][x]=way%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
       vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return solve(n,k,target,dp);
    }
};