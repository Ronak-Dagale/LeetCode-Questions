class Solution {
public:
    void solve(vector<bool>&vis,int n,vector<vector<int>>& isConnected,int i)
    {
        vis[i]=1;
        
        for(int j=0;j<n;j++)
        {
            if(vis[j]==0 && isConnected[i][j]==1)
            {
                solve(vis,n,isConnected,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        
       int n=isConnected.size();
        vector<bool>vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                solve(vis,n,isConnected,i);
            }
        }
        return ans;
    }
};