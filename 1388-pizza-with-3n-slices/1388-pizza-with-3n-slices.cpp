class Solution {
public:
  
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        
        vector<vector<int>>dp1(k+2,vector<int>(k,0));
        vector<vector<int>>dp2(k+2,vector<int>(k,0));
        
        for(int id=k-2;id>=0;id--)
        {
            for(int n=1;n<=k/3;n++)
            {
              int take=slices[id]+dp1[id+2][n-1];
        int nottake=dp1[id+1][n];
        
       dp1[id][n]=max(take,nottake);
            }
        }
        
        int case1=dp1[0][k/3];
        
         for(int id=k-1;id>=1;id--)
        {
            for(int n=1;n<=k/3;n++)
            {
              int take=slices[id]+dp2[id+2][n-1];
              int nottake=dp2[id+1][n];
        
       dp2[id][n]=max(take,nottake);
            }
        }
        
        int case2=dp2[1][k/3];
        
        return max(case1,case2);
    }
};