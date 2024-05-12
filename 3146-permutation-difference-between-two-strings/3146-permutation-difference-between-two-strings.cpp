class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int>temp(26,0);
        for(int i=0;i<s.size();i++)
            temp[s[i]-'a']=i;
        
        int ans=0;
        for(int i=0;i<t.size();i++)
            ans=ans+abs(temp[t[i]-'a']-i);
        
        return ans;
    }
};