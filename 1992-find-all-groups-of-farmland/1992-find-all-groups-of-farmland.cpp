class Solution {
public:
    void solve(vector<vector<int>>& land,vector<vector<bool>>&vis,int &a1,int &a2,int i,int j)
    {
        vis[i][j]=1;
        a1=max(a1,i);
        a2=max(a2,j);
        int m=land.size();
        int n=land[0].size();
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
        
        for(int k=0;k<4;k++)
        {
            int nx=i+dx[k];
            int ny=j+dy[k];
            
            if(nx>=0 && ny>=0 && nx<m && ny<n && !vis[nx][ny] && land[nx][ny])
                solve(land,vis,a1,a2,nx,ny);
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        int m=land.size();
        int n=land[0].size();
        
        vector<vector<bool>>vis(m,vector<bool>(n,0));
        
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
              if(!vis[i][j] && land[i][j])
              {
                  vector<int>res(4);
                  res[0]=i;
                  res[1]=j;
                  int a1=INT_MIN;
                  int a2=INT_MIN;
                  
                  solve(land,vis,a1,a2,i,j);
                  res[2]=a1;
                  res[3]=a2;
                  
                  ans.push_back(res);
              }
          }
        }
        return ans;
    }
};