class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0) a=abs(nums[i]);
            else nums[abs(nums[i])-1]*=-1;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) b=i+1;
        }
            
        return {a,b};
    }
};