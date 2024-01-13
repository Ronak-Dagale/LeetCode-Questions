class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
           if(s1[i]>t1[i])
           {
              ans+=s1[i]-t1[i];
           }
        }
        return ans;
    }
};