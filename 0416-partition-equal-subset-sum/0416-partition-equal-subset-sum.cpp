class Solution {
public:
    bool solve(vector<int>& nums,int x,int i,vector<vector<int>>&dp)
    {
        if(x<0) return 0;
         if(x==0) return 1;
        if(i>=nums.size()) return 0;
        
       if(dp[i][x]!=-1) return dp[i][x];
        
         bool incl=solve(nums,x-nums[i],i+1,dp);
          bool excl=solve(nums,x,i+1,dp);
        
        
       
        return dp[i][x]=(incl|excl);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        
        if(sum%2!=0)
            return 0;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return solve(nums,sum/2,0,dp);
    }
};