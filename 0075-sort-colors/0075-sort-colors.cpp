class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        for(int k=0;k<nums.size();k++)
        {
            
            if(nums[k]==0)
            nums[i++]=0;
            else if(nums[k]==2)
                j--;
        }
        while(i<=j)
            nums[i++]=1;
        j++;
        while(j<nums.size())
            nums[j++]=2;
    }
};