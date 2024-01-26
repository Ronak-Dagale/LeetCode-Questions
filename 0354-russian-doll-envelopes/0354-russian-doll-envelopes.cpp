class Solution {
public:
   static bool cmp(vector<int>a,vector<int>b)
    {
        if(a[0]!=b[0])
            return a[0]<b[0];
        else
            return  a[1]>b[1];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),cmp);
        
       int n=envelopes.size();
        vector<int>ans;
        ans.push_back(envelopes[0][1]);
        for(int i=1;i<n;i++)
        {
            if(envelopes[i][1]>ans.back())
                ans.push_back(envelopes[i][1]);
            else
            {
              int id=lower_bound(ans.begin(),ans.end(),envelopes[i][1])-ans.begin();
                ans[id]=envelopes[i][1];
            }
        }
        return ans.size();
    }
};