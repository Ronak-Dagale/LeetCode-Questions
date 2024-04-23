class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
         if(n==1)
        return {0};

        vector<vector<int>> Adj(n);
        for(auto x:edges)
        {
            Adj[x[0]].push_back(x[1]);
            Adj[x[1]].push_back(x[0]);
        }

        vector<int> res;

        vector<int> card(n);
        for(int i=0;i<n;i++)
        card[i]=Adj[i].size();

        queue<int> q;
        for(int i=0;i<n;i++) 
        if(card[i]==1)
        q.push(i);

        int grsize=n;     
        while(grsize>2)
        {
            int size=q.size();
            while(size--)
            {
                int cur=q.front();
                for(auto x:Adj[cur])
                {
                    if(card[x])    
                    {
                        card[x]--;      
                        card[cur]--;    

                        if(card[x]==1)  
                        q.push(x);      
                                        
                    }
                }
                q.pop();
                grsize--;            
            }
        }
        while(!q.empty())
        {res.push_back(q.front());
        q.pop();}
        return res;
    }
};