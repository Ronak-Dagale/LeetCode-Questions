class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        
        sum=(n*(n+1))/2;
        long long temp=0;
        for(int i=0;i<n;i++)
            temp=temp+nums[i];
        
        return sum-temp;
    }
};