class Solution {
public:
    void dfs(int curr, vector<vector<int>>&ans, vector<vector<int>>&adj,vector<bool>&vis,int parent)
    {
       vis[curr]=1;
        for(auto dest:adj[curr])
        {
            if(!vis[dest])
            {
                 ans[dest].push_back(parent);
            dfs(dest,ans,adj,vis,parent);
            }
           
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>ans(n);
        vector<vector<int>>adj(n);
        
        for(auto e:edges)
        adj[e[0]].push_back(e[1]);
        
        for(int i=0;i<n;i++)
        {
            vector<bool>vis(n,0);
            dfs(i,ans,adj,vis,i);
        }
        return ans;
    }
};