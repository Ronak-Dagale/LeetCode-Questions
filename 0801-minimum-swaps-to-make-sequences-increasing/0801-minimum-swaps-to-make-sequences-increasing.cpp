class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2,int id,int isswap, vector<vector<int>>&dp)
    {
        if(id>=nums1.size()) return 0;
        
        if(dp[id][isswap]!=-1) return dp[id][isswap];
        
        int ans=INT_MAX;
        
        int prev1=nums1[id-1];
        int prev2=nums2[id-1];
        
        if(isswap)
            swap(prev1,prev2);
        
        // noswap cond
        if(prev1<nums1[id] && prev2<nums2[id])
           ans=solve(nums1,nums2,id+1,0,dp);
        
        // swap when
        if(prev2<nums1[id] && prev1<nums2[id])
            ans=min(ans,1+solve(nums1,nums2,id+1,1,dp));
        
        return dp[id][isswap]=ans;
    }
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        
        int n=nums1.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        for(int id=n-1;id>=1;id--)
        {
            for(int isswap=0;isswap<=1;isswap++)
            {
                
        int ans=INT_MAX;
        
        int prev1=nums1[id-1];
        int prev2=nums2[id-1];
        
        if(isswap)
            swap(prev1,prev2);
        
        // noswap cond
        if(prev1<nums1[id] && prev2<nums2[id])
           ans=dp[id+1][0];
        
        // swap when
        if(prev2<nums1[id] && prev1<nums2[id])
            ans=min(ans,1+dp[id+1][1]);
        
         dp[id][isswap]=ans;
            }
        }
        return (dp[1][0]);
        
    }
};