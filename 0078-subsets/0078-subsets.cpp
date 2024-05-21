class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>&ans,vector<int>&temp,int i)
{
// Here is the base case
   if(i>=nums.size())
   {
       ans.push_back(temp);
       return;
   }

   // exclude logic 
   solve(nums,ans,temp,i+1);

   //include logic
   temp.push_back(nums[i]);  // first include
   solve(nums,ans,temp,i+1);
   temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums,ans,temp,0);
        return ans;
    }
};