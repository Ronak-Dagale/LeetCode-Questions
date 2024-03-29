class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
      
        int maxi=INT_MIN;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
          maxi=max(maxi,nums[i]);
        
          int left=0,right=0;
          int n=nums.size();
       
        while(right<n)
        {
            if(maxi==nums[right])
                cnt++;
            
              while(cnt>=k)
              {
                  if(maxi==nums[left])cnt--;
                  ans=ans+(n-right);
                  left++;
              }
            right++;
        }
        return ans;
        
    }
};