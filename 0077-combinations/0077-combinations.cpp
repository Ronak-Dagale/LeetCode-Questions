class Solution {
public:
    void solve(int n,int k,int i,vector<vector<int>>&ans,vector<int>&temp)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(i>n)
            return ;
        
        temp.push_back(i);
        solve(n,k,i+1,ans,temp);
        temp.pop_back();
        solve(n,k,i+1,ans,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        
        vector<int>temp;
        solve(n,k,1,ans,temp);
        return ans;
    }
};