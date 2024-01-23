class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int l=0,r=0;r<nums.size();r++)
        {
            if(nums[r]!=0)
            {
                nums[l]=nums[r];
                if(l!=r)
                    nums[r]=0;
                l++;
                
            }
        }
    }
};