class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        
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
            if(v.second==maxi)
                ans=ans+maxi;
        }
        return ans;
    }
};