class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0,right=0,ans=0,prod=1;
        if(k<=1) return 0;
        int n=nums.size();
        
        while(right<n)
        {
            prod=prod*nums[right];
            while(prod>=k)prod=prod/nums[left++];
            ans=ans+1+(right-left);
            right++;
        }
        return ans;
    }
};