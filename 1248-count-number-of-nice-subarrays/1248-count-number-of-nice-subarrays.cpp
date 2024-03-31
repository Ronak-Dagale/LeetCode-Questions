class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        vector<int>oddcnt(n,0);
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&1)cnt++;
            
            int ele=cnt-k;
            ans+=mp[ele];
            
            mp[cnt]++;
        }
        return ans;
    }
};