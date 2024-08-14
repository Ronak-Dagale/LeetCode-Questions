class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        vector<int>mp(1000000+7,0);
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int diff=abs(nums[i]-nums[j]);
                mp[diff]++;
            }
        }
        
        for(int i=0;i<=1000000;i++)
        {
        k-=mp[i];
            if(k<=0) return i;
        }
        
        return -1;
    }
};