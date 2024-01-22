class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>f(n+1,0);
        
        for(int i=0;i<n;i++)
            f[nums[i]]++;
        
        int a=0,b=0;
        for(int i=1;i<=n;i++)
        {
            if(f[i]==2)a=i;
            else if(f[i]==0) b=i;
        }
        return {a,b};
    }
};