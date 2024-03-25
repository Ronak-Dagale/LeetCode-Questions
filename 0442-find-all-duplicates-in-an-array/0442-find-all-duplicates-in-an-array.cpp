class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int ele=abs(nums[i])-1;
            nums[ele]=-nums[ele];
            
             if(nums[ele]>0)
                 ans.push_back(ele+1);
        }  
        
       
       
        return ans;
    }
};