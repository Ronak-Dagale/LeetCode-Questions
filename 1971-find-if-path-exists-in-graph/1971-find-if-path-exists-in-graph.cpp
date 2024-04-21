class Solution {
public:
    bool solve(vector<vector<int>>& edges, int s, int d,vector<set<int>>&arr,vector<bool>&vis)
    {
       vis[s]=1; 
       if(s==d) return 1;
        
       for(auto ne:arr[s])
       {
           bool res=0;
           if(!vis[ne])
            res=solve(edges,ne,d,arr,vis);
           if(res)
               return 1;
       }
        return 0;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<set<int>>arr(n);
        vector<bool>vis(n,0);
        for(int i=0;i<edges.size();i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            
            arr[u].insert(v);
            arr[v].insert(u);
        }
        
        
        return solve(edges,source,destination,arr,vis);
    }
};