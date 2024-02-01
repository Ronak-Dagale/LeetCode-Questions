class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            
            if(nums[i+2]-nums[i]<=k)
            {
              temp.push_back(nums[i++]);  
              temp.push_back(nums[i++]);  
              temp.push_back(nums[i]);  
            }
            else
                return {};
            
            ans.push_back(temp);
        }
        return ans;
    }
};