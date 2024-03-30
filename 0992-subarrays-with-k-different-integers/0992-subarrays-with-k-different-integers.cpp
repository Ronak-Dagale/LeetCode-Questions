class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int res1=solve(nums,k);
        int res2=solve(nums,k-1);
        return res1-res2;
    }
    int solve(vector<int>& nums, int k)
    {
        int ans=0;
        int l=0,r=0;
        
        unordered_map<int,int>mp;
        while(r<nums.size())
        {
            mp[nums[r]]++;
            
            
            while(mp.size()>k)
            {
                mp[nums[l]]--;
                
                if(mp[nums[l]]==0)
                    mp.erase(nums[l]);
                l++;
            }
            
            
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
};