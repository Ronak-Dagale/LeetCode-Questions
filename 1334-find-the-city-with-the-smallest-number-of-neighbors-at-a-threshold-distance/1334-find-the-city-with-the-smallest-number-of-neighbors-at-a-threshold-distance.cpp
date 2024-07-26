class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>dist(n,vector<int>(n,100000));
        
        for(int i=0;i<n;i++)
            dist[i][i]=0;
        
        for(int i=0;i<edges.size();i++)
        {
          dist[edges[i][0]][edges[i][1]]=edges[i][2];
          dist[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              for(int k=0;k<n;k++)
              {
                  dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
              }
            }
        }
        
        int ans=-1;
        int mini=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
          int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j && dist[i][j]<=distanceThreshold)
                    cnt++;
            }
            if(cnt<=mini)
            {
                mini=cnt;
                ans=i;
            }
        }
        return ans;
    }
};