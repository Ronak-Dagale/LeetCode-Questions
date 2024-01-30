class Solution {
public:
    int solve(vector<int>& slices,int id,int endid,int n,vector<vector<int>>&dp)
    {
       if(n==0 || id>endid) return 0;
        
        if(dp[id][n]!=-1) return dp[id][n];
        int take=slices[id]+solve(slices,id+2,endid,n-1,dp);
        int nottake=solve(slices,id+1,endid,n,dp);
        
        return dp[id][n]=max(take,nottake);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        
        vector<vector<int>>dp1(k,vector<int>(k,-1));
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case1=solve(slices,0,k-2,k/3,dp1);
        int case2=solve(slices,1,k-1,k/3,dp2);
        
        return max(case1,case2);
    }
};