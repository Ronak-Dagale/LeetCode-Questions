class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        int point=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
          point=max(point,nums[i]);
            ans+=point-nums[i];
            point=point+1;
        }
        return ans;
    }
};