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
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        //return solve(satisfaction,0,0);
        
        int n=satisfaction.size();
        
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solvemem(satisfaction,0,0,dp);
        
    }
};