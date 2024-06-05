class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<vector<int>>fre1(n,vector<int>(26,0));
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                fre1[i][words[i][j]-'a']++;
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++)
        {
          int mini=INT_MAX;
            for(int j=0;j<n;j++)
            {
               mini=min(mini,fre1[j][i]);
            }
            for(int k=0;k<mini;k++)
               { string s="";
                s.push_back('a'+i);
                ans.push_back(s);
               }
        }
        return ans;
    }
};