class Solution {
public:
    int mapped(vector<int>& m,int p)
    {
        int ans=0;
        int mul=1;
        if(p==0)
            return m[0];
        while(p)
        {
            ans+=(mul*m[p%10]);
            mul=mul*10;
            p=p/10;
        }
        return ans;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>temp(n,vector<int>(3));
        
        for(int i=0;i<n;i++)
        {
            temp[i][0]=mapped(mapping,nums[i]);
            
            temp[i][2]=nums[i];
            temp[i][1]=i;
        }
        sort(temp.begin(),temp.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++)
            ans[i]=temp[i][2];
        
        return ans;
    }
};