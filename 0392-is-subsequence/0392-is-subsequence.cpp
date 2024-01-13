class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return 1;
        int i=0;
        
        for(int j=0;j<t.size();j++)
        {
           if(s[i]==t[j])
               i++;
            
            if(i==s.size())
                return 1;
        }
        return 0;
    }
};