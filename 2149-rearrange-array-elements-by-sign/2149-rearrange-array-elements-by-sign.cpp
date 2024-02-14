class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }
        for(int i=0,j=0,k=0;i<nums.size();i++)
        {
          if(i&1)
              nums[i]=neg[k++];
            else
                nums[i]=pos[j++];
        }
        return nums;
    }
};