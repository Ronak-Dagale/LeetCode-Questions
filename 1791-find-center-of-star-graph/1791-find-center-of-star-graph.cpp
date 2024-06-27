class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,set<int>>mp;
        int maxi=INT_MIN;
        for(int i=0;i<edges.size();i++)
        {
          int u=edges[i][0];
            int v=edges[i][1];
            
            maxi=max(maxi,u);
            maxi=max(maxi,v);
            mp[u].insert(v);
            mp[v].insert(u);
        }
        
        for(auto v:mp)
        {
            if(v.second.size()==maxi-1)
                return v.first;
        }
        return -1;
    }
};