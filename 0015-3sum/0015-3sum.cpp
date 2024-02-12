class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=nums[k];
                    s.insert(temp);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                    j++;
            }
        }
        
        for(auto v:s)
            ans.push_back(v);
        return ans;
    }
};