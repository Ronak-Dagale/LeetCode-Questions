class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<vector<int>,vector<int>>mp;
        vector<vector<int>>fre(n,vector<int>(26,0));
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<strs[i].size();j++)
          {
              int ch=strs[i][j];
              fre[i][ch-'a']++;
          }
            mp[fre[i]].push_back(i);
        }
        
         vector<vector<string>>ans;
         for(auto v:mp)
         {
             vector<string>temp;
             for(auto v1:v.second)
             {
                 temp.push_back(strs[v1]);
             }
             ans.push_back(temp);
         }
       
        return ans;
    }
};