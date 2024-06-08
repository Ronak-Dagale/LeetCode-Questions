class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
          unordered_map<int,int>mp1;
          long long sum=0;
        if(nums.size()<2) return 0;
        mp1[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
        
            sum+=nums[i];
            if(mp1.find(sum%k)!=mp1.end())
            {
              if(i-mp1[sum%k]>1)return 1;  
            }
            else
                mp1[sum%k]=i;
        }
        return 0;
    }
};