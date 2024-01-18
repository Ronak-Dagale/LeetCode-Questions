class Solution {
public:
    int solve(vector<int>& v,int i,int j)
    {
        if(i+1==j)
            return 0;
        
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++)
        {
            ans=min(ans,v[i]*v[j]*v[k]+solve(v,i,k)+solve(v,k,j));
        }
        return ans;
    }
    int solvemem(vector<int>& v,int i,int j,  vector<vector<int>>&dp)
    {
        if(i+1==j)
            return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++)
        {
            ans=min(ans,v[i]*v[j]*v[k]+solvemem(v,i,k,dp)+solvemem(v,k,j,dp));
        }
        dp[i][j]=ans;
        return ans;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solvemem(values,0,values.size()-1,dp);
    }
};