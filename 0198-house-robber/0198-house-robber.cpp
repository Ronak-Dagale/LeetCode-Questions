class Solution {
public:
    int rob(vector<int>& nums) {
       
        int a=nums[0];
        int b=0;
        int c=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            c=max(b+nums[i],a);
            b=a;
            a=c;
        }
        return c;
    }
};