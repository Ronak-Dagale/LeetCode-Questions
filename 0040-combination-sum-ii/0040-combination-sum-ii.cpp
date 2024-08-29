class Solution {
public:                      
    void solve(vector<int>& c,int tar,vector<vector<int>>&ans,vector<int>temp,int sum,int id)
    {
        if(sum==tar)
        {  
            ans.push_back(temp);
            return;
        }
        if(id>=c.size())
         return;
        if(sum>tar)
            return;
        
       for(int i=id;i<c.size();i++)
       {
           if(i>id && c[i]==c[i-1]) continue;
           temp.push_back(c[i]);
           solve(c,tar,ans,temp,sum+c[i],i+1);
           temp.pop_back();
       }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,ans,temp,sum,0);
        return ans;
    }
};
