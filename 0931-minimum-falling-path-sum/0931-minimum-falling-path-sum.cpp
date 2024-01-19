class Solution {
public:
    int solve(int r,int c,vector<vector<int>>& matrix,vector<vector<int>>& dp,int n)
    {
        if(r+1==n)
            return matrix[r][c];
        if(dp[r][c]!=INT_MAX)
            return dp[r][c];
        
        int ans=solve(r+1,c,matrix,dp,n);
        
        if(c+1<n)
            ans=min(ans,solve(r+1,c+1,matrix,dp,n));
        
        if(c-1>=0)
            ans=min(ans,solve(r+1,c-1,matrix,dp,n));
        
        dp[r][c]=ans+matrix[r][c];
        
        return dp[r][c];
            
           }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;
        
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            ans=min(ans,solve(0,i,matrix,dp,n));
        }
        return ans;
    }
};