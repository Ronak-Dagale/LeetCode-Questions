class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n=books.size();
      vector<int>dp(n,-1);
        return solve(books,shelfWidth,0,dp);
    }
    
    int solve(vector<vector<int>>& books, int sw,int id, vector<int>&dp)
    {
        if(id==books.size())return 0;
       if(dp[id]!=-1) return dp[id];
        
        int ans=INT_MAX,mh=0,w=0;
        for(int i=id;i<books.size();i++)
        {
          w=w+books[i][0];
            if(w>sw) break;
            mh=max(mh,books[i][1]);
            ans=min(ans,mh+solve(books,sw,i+1,dp));
        }
        return dp[id]=ans;
    }
};