class Solution {
public:
    int solve( unordered_map<int,list<int>>&mp,int n)
    {
      queue<int>q;
        q.push(0);
  
        vector<int>vis(n,-1);
        while(!q.empty())
        {
            int size=q.size();
            bool flag=0;
            while(size--)
            {
         int front=q.front();
            q.pop();
            if(front==n-1){
                flag=1;
            }
            for(auto v:mp[front])
            {
                if(vis[v]==-1)
                {
                    vis[v]=front;
                    q.push(v);
                }
                
            }
            if(front+1<n && vis[front+1]==-1)
               { vis[front+1]=front;
                 q.push(front+1);
               }
            }
            if(flag) break;
           
        }
        int i=n-1;
        vector<int>ans;
        while(i!=0)
        {
            ans.push_back(i);
            i=vis[i];
        }
        ans.push_back(0);
        int z=ans.size();
        return z;
        
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int,list<int>>mp;
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
             mp[queries[i][0]].push_back(queries[i][1]);
            
              ans.push_back(solve(mp,n)-1);
        }
        // vector<int>m=solve(mp,n);
        // sort(m.begin(),m.end());
        
        return ans;
    }
};