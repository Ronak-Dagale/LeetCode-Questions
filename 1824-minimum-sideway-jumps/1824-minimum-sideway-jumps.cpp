class Solution {
public:
    int solverec(vector<int>& obstacles,int lane,int pos)
    {
        int n=obstacles.size()-1;
        if(pos==n)
            return 0;
        
        //  is there staight road is available
        if(obstacles[pos+1]!=lane)
            return solverec(obstacles,lane,pos+1);
        else
        {
            int ans=INT_MAX;
            for(int i=1;i<=3;i++)
            {
               if(i!=lane && obstacles[pos]!=i)
               {
                   ans=min(ans,1+solverec(obstacles,i,pos));
               }
            }
            return ans;
        }
    }
     int solvemem(vector<int>& obstacles,int lane,int pos,vector<vector<int>>&dp)
    {
        int n=obstacles.size()-1;
        if(pos==n)
            return 0;
        
         if(dp[lane][pos]!=-1)
             return dp[lane][pos];
         
        //  is there staight road is available
        if(obstacles[pos+1]!=lane)
            return solvemem(obstacles,lane,pos+1,dp);
        else
        {
            int ans=INT_MAX;
            for(int i=1;i<=3;i++)
            {
               if(i!=lane && obstacles[pos]!=i)
               {
                   ans=min(ans,1+solvemem(obstacles,i,pos,dp));
               }
            }
            dp[lane][pos]=ans;
            return ans;
        }
    }
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int>>dp(4,vector<int>(obstacles.size(),-1));
        
        return solvemem(obstacles,2,0,dp);
    }
};