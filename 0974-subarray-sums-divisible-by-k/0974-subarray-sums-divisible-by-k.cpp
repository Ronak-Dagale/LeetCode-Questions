class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
          vector<int>fre(k,0);
          long long sum=0;
           int ans=0;
           fre[ans]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum<0)
            {
                int temp=(k+(sum%k))%k;
                fre[temp]++;
                ans+=fre[temp%k]-1;
            }
            else
            {
              fre[sum%k]++;
             ans+=fre[sum%k]-1;
            }
        }
       
        return ans;
    }
};