class Solution {
public:
     void help(vector<vector<char>>& grid,vector<vector<bool>>&vis,int m,int n,int i,int j)
     {
            vis[i][j]=1;
         
          int dx[]={1,0,-1,0};
          int dy[]={0,1,0,-1};
         
         for(int k=0;k<4;k++)
         {
             int nx=i+dx[k];
             int ny=j+dy[k];
             
             if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1' && vis[nx][ny]==0)
                 help(grid,vis,m,n,nx,ny);
         }
     }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
             if(grid[i][j]=='1' && vis[i][j]==0)
             {
                 ans++;
                 help(grid,vis,m,n,i,j);
             }
          }
        }
        return ans;
    }
};