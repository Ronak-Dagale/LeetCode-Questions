class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
         int ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>0)
           {
               int ele=nums[i];
               if(mp[-ele]>0)
               {
                   ans=max(ans,ele);
               }
           }
        }
        return ans==INT_MIN? -1:ans;
    }
};