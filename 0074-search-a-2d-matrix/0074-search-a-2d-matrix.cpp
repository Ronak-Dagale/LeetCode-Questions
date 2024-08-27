class Solution {
public:   
    bool solve(vector<vector<int>>& matrix,int row,int l,int r,int target)
    {
        while(l<=r)
        {
          int mid=(r+l)/2;
            
            if(matrix[row][mid]==target) return 1;
            else if(matrix[row][mid]<target)
            {
               l=mid+1;
            }
            else
                r=mid-1;
        }
        return 0;
            
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int row=0,l=0,r=n-1;
        
        while(row<m)
        {
            if(target>=matrix[row][l] && target<=matrix[row][r])
            {
              return solve(matrix,row,l,r,target);
            }
            row++;
        }
        return 0;
    }
};
