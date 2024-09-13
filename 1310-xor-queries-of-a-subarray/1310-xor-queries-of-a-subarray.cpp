class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int q=queries.size();
       vector<int>ans(q);
        vector<int>temp(n);
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=x^arr[i];
            temp[i]=x;
        }
        
        for(int i=0;i<queries.size();i++)
        {
            int y=0,z=0;
            if(queries[i][0]-1>=0) y=temp[queries[i][0]-1];
            z=temp[queries[i][1]];
            
            ans[i]=y^z;
        }
        return ans;
    }
};