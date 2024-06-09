class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          unordered_map<int,int>mp;
        long long sum=0;
        int ans=0;
        mp[ans]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                int temp=(k+(sum%k))%k;
                mp[temp]++;
                ans+=mp[temp%k]-1;
            }
            else
            {mp[sum%k]++;
            
            ans+=mp[sum%k]-1;}
        }
       
        return ans;
    }
};