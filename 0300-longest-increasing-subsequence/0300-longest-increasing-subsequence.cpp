class Solution {
public:
    int solve(vector<int>& nums,int id,int prev, vector<vector<int>>&dp)
    {
        if(id==nums.size()) return 0;
        
        if(dp[id][prev+1]!=-1) return dp[id][prev+1]; 
        int incl=0,excl=0;
        
        if(prev==-1 || nums[id]>nums[prev])
            incl=1+solve(nums,id+1,id,dp);
        
        excl=solve(nums,id+1,prev,dp);
        return dp[id][prev+1]=max(incl,excl);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
      return solve(nums,0,-1,dp);
    }
};
