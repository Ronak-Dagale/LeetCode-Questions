//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool ispresent(vector<vector<int> > &matrix,int i,int m,int x)
    {
        int s=0,e=m-1;
        while(s<=e)
        {
            int mid=(e+s)/2;
            
            if(matrix[i][mid]==x)
            return 1;
            
            if(matrix[i][mid]>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return 0;
    }
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]<=x && matrix[i][m-1]>=x)
            {
                for(int j=0;j<m;j++)
                {
                    if(ispresent(matrix,i,m,x))
                    return 1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {

 		int n, m;
    	cin>> n>> m;
        vector<vector<int> > matrix(n);
            
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        int x;
        cin>>x;
        Solution obj;
        if (obj.search(matrix,n,m,x)) 
            cout << "1\n"; 
        else
            cout << "0\n"; 
    }
	return 0; 
} 


// } Driver Code Ends