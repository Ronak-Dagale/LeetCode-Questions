class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       vector<int>mp(101,0);
        
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi)
                maxi=mp[nums[i]];
        }
        int ans=0;
       
        for(auto v:mp)
        {
            if(v==maxi)
                ans=ans+maxi;
        }
        return ans;
    }
};