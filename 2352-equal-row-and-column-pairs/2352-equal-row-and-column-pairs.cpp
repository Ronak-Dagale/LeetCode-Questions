class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string>v1,v2;
        
    int n=grid.size();
        
        for(int i=0;i<n;i++)
        {
            string v3="";
            string v4="";
            for(int j=0;j<n;j++)
            {
               v3=v3+","+to_string(grid[i][j]);
               v4=v4+","+to_string(grid[j][i]);
            }
            v1.push_back(v3);
            v2.push_back(v4);
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
              if(v1[i]==v2[j])
                  ans++;
          }
        }
        return ans;
        
    }
};