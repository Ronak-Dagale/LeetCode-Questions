class Solution {
public:
    int solve(vector<int>& arr,int id,int time)
    {
        if(id==arr.size())
            return 0;
        
        int incl=0,excl=0;
        
        //include
        incl=arr[id]*(time+1)+solve(arr,id+1,time+1);
        
        excl=0+solve(arr,id+1,time);
        
        return max(incl,excl);
    }
    int solvemem(vector<int>& arr,int id,int time, vector<vector<int>>&dp)
    {
        if(id==arr.size())
            return 0;
        
        if(dp[id][time]!=-1)
            return dp[id][time];
        
        int incl=0,excl=0;
        
        //include
        incl=arr[id]*(time+1)+solvemem(arr,id+1,time+1,dp);
        
        excl=0+solvemem(arr,id+1,time,dp);
        
        return dp[id][time]=max(incl,excl);
    }
    int solvetab(vector<int>& arr)
    {
        int n=arr.size();
      vector<vector<int>>dp(n+1,vector<int>(n+1,0));  
        
        for(int id=n-1;id>=0;id--)
        {
            for(int time=id;time>=0;time--)
            {
                  int incl=0,excl=0;
        
        //include
        incl=arr[id]*(time+1)+dp[id+1][time+1];
        
        excl=0+dp[id+1][time];
        
         dp[id][time]=max(incl,excl);
            }
        }
        return dp[0][0];
    }
    int solveopt(vector<int>& arr)
    {
        int n=arr.size();
    
        vector<int>curr(n+1,0);
        vector<int>ne(n+1,0);
        
        for(int id=n-1;id>=0;id--)
        {
            for(int time=id;time>=0;time--)
            {
                  int incl=0,excl=0;
        
        //include
        incl=arr[id]*(time+1)+ne[time+1];
        
        excl=0+ne[time];
        
         curr[time]=max(incl,excl);
            }
            ne=curr;
        }
        return ne[0];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        //return solve(satisfaction,0,0);
        
        int n=satisfaction.size();
        
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // return solvemem(satisfaction,0,0,dp);
        
        //return solvetab(satisfaction);
        return solveopt(satisfaction);
        
    }
};