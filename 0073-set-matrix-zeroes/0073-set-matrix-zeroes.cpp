class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>r,c;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
         for(int j=0;j<n;j++)
         {
           if(matrix[i][j]==0)
           {
              r.insert(i);
               c.insert(j);
           }
               
         }
        }
        
        for(auto s:r)
        {
            for(int j=0;j<n;j++)
            {
               matrix[s][j]=0;
            }
        }
        
        for(auto s:c)
        {
         for(int i=0;i<m;i++)
         {
          matrix[i][s]=0;
         }
        }
    }
};