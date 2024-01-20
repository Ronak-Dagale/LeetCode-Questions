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
     int solvetab(vector<int>& obstacles)
    {
          vector<vector<int>>dp(4,vector<int>(obstacles.size(),INT_MAX));
         
        int n=obstacles.size()-1;
      
        //  is there staight road is available
         dp[0][n]=0;
         dp[1][n]=0;
         dp[2][n]=0;
         dp[3][n]=0;
         
         for(int pos=n-1;pos>=0;pos--)
         {
           for(int lane=1;lane<=3;lane++)
           {
               if(obstacles[pos+1]!=lane)
          dp[lane][pos]=dp[lane][pos+1];
        else
        {
            int ans=INT_MAX;
            for(int i=1;i<=3;i++)
            {
               if(i!=lane && obstacles[pos]!=i)
               {
                   ans=min(ans,1+dp[i][pos+1]);
               }
            }
            dp[lane][pos]=ans;
        }
           }
         }
        return min(dp[2][0],min(1+dp[1][0],1+dp[3][0]));
    }
    int minSideJumps(vector<int>& obstacles) {
       
        return solvetab(obstacles);
    }
};