class neighborSum {
public:
    vector<vector<int>>v;
    neighborSum(vector<vector<int>>& grid) {
        v=grid;
    }
    
    int adjacentSum(int value) {
       int ans=0;
        int r=v.size();
        int c=v[0].size();
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==value)
                {
                    if(i+1<r)
                        ans+=v[i+1][j];
                    if(i-1>=0)
                        ans+=v[i-1][j];
                    if(j+1<c)
                        ans+=v[i][j+1];
                    if(j-1>=0)
                        ans+=v[i][j-1];
                    
                    return ans;
                }
            }
        }
        return ans;
    }
    
    int diagonalSum(int value) {
        int ans=0;
        int r=v.size();
        int c=v[0].size();
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                if(v[i][j]==value)
                {
                    if(i+1<r && j+1<c)
                        ans+=v[i+1][j+1];
                    if(i-1>=0 && j-1>=0)
                        ans+=v[i-1][j-1];
                    if(j+1<c && i-1>=0)
                        ans+=v[i-1][j+1];
                    if(j-1>=0 && i+1<r)
                        ans+=v[i+1][j-1];
                    
                    return ans;
                }
            }
        }
        return ans;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */