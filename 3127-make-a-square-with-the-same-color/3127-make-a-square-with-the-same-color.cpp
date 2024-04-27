class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int cntb=0;
                int cntw=0;
                
                if(grid[i][j]=='B')cntb++;
                else cntw++;
                
                if(i+1<3 && grid[i+1][j]=='B') cntb++;
                else if(i+1<3 && grid[i+1][j]=='W') cntw++;
                
                if(j+1<3 && grid[i][j+1]=='B') cntb++;
                else if(j+1<3 && grid[i][j+1]=='W') cntw++;
                
                if(i+1<3 && j+1<3 && grid[i+1][j+1]=='B') cntb++;
                else if(i+1<3 && j+1<3 && grid[i+1][j+1]=='W') cntw++;
                
               // cout<<cntb<<cntw<<endl;
                if(cntb+cntw==4 && (cntb==4 || cntw==4 || cntw==3 || cntb==3)) return 1;
            }
        }
        return 0;
    }
};