class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
           int id=abs(nums[i]);
            if(nums[id]<0) return id;
            nums[id]=-nums[id];
        }
        return -1;
    }
};