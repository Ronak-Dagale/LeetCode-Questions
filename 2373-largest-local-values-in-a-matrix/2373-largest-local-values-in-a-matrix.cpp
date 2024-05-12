class Solution {
public:
    int findmax(vector<vector<int>>& grid,int i,int j,int n)
    {
        int ans=INT_MIN;
       for(int k=i;k<i+3;k++)
       {
         for(int l=j;l<j+3;l++)
         {
             ans=max(ans,grid[k][l]);
         }
       }
        return ans;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        int p=n-2;
        vector<vector<int>>ans(p,vector<int>(p));
        
        for(int i=0;i<p;i++)
        {
          for(int j=0;j<p;j++)
          {
             ans[i][j]=findmax(grid,i,j,n);
          }
        }
        return ans;
    }
};