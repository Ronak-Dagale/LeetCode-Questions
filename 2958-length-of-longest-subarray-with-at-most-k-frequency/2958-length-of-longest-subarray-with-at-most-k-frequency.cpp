class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=INT_MIN;
        int left=0,right=0;
        map<int,int>mp;
        while(right<nums.size())
        {
            int ele=nums[right];
            mp[ele]++;
            while(mp[ele]>k)
            {
                int temp=nums[left];
                mp[temp]--;
                left++;
            }
            int len=1+(right-left);
            ans=max(ans,len);
            right++;
        }
        return ans;
    }
};