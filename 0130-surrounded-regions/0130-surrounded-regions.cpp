class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j,int m,int n)
    {
        board[i][j]='#';
        
        int dx[]={1,0,-1,0};
        int dy[]={0,1,0,-1};
         
        for(int k=0;k<4;k++)
        {
            int nx=i+dx[k];
            int ny=j+dy[k];
            
            if(nx>=0 && ny>=0 && nx<m && ny<n && board[nx][ny]=='O')
                dfs(board,nx,ny,m,n);
        }
    }
    void solve(vector<vector<char>>& board) {
      int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
                dfs(board,i,0,m,n);
            if(board[i][n-1]=='O')
                dfs(board,i,n-1,m,n);
        }
        
        for(int i=0;i<n;i++)
        {
           if(board[0][i]=='O')
               dfs(board,0,i,m,n);
            if(board[m-1][i]=='O')
                dfs(board,m-1,i,m,n);
        }
        
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
              if(board[i][j]=='O')
                  board[i][j]='X';
               else if(board[i][j]=='#')
                   board[i][j]='O';
           }
        }
    }
};
