class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int pre=0;
        mp[0]=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
           pre=pre+nums[i];
            if(mp.find(pre-goal)!=mp.end())
                cnt+=mp[pre-goal];
           mp[pre]++;
        }
        return cnt;
    }
};