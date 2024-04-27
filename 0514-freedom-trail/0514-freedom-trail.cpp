class Solution {
public:
    int solve(unordered_map<char,vector<int>>&mp,string &key,int id,int prev,vector<vector<int>>&dp,int rs)
    {
       if(id>=key.size()) return 0;
        
        if(dp[id][prev]!=-1) return dp[id][prev];
        
        int ans=INT_MAX;
        for(int i:mp[key[id]])
        {
          int steps;
            if (i >= prev) {
                steps = min(i - prev, static_cast<int>(prev + rs) - i);
            } else {
                steps = min(prev - i, static_cast<int>(i + rs)-prev);
            }
            ans=min(ans,steps+1+solve(mp,key,id+1,i,dp,rs));
        }
        return dp[id][prev]=ans;
    }
    int findRotateSteps(string ring, string key) {
        unordered_map<char,vector<int>>mp;
        int ks=key.size();
        int rs=ring.size();
        
        vector<vector<int>>dp(ks,vector<int>(rs,-1));
        for(int i=0;i<ring.size();i++)
            mp[ring[i]].push_back(i);
        
         int ans=solve(mp,key,0,0,dp,rs);
         return ans;
    }
};