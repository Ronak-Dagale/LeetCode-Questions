class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>>mp;
        vector<int>vis(n,INT_MAX);
        for(auto &x:flights)
        {
            mp[x[0]].push_back({x[1],x[2]});
        }
        
        queue<pair<int,int>>q;
         vis[src]=0;
         q.push({src,0});
         int cnt=0;
         k++;
          while(k--)
          {
               int size=q.size();
                while(size--)
                {
                  int curr=q.front().second;
                     for(auto x:mp[q.front().first])
                     {
                         int newp=x.second+curr;
                         if(newp<vis[x.first])
                         {
                            vis[x.first]=newp;
                             q.push({x.first,newp});
                         }
                     }
                    q.pop();
                }
              cnt++;
          }
        
        return vis[dst]==INT_MAX?-1:vis[dst];
    }
};