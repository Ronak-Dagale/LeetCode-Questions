class Solution {
public:
    int solve(vector<string>& arr,int i, vector<int>vis)
    {
        if(i==arr.size())
            return 0;
        
        bool flag=1;
        for(int j=0;j<arr[i].size();j++)
        {
            vis[arr[i][j]-'a']++;
            
            if(vis[arr[i][j]-'a']>1) flag=0;
        }
        
        int incl=-1,excl=-1;
        
        if(flag)
            incl=arr[i].size()+solve(arr,i+1,vis);
        
        for(int j=0;j<arr[i].size();j++)
        {
            vis[arr[i][j]-'a']--;
        }
        
        excl=solve(arr,i+1,vis);
        return max(incl,excl);
    }
    int maxLength(vector<string>& arr) {
        vector<int>vis(26,0);
        return solve(arr,0,vis);
    }
};