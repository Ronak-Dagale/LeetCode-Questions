class Solution {
public:
    int minimumDeletions(string s) {
       int cnta=0;
        int cntb=0;
        int ans=INT_MAX;
        
        for(int i=0;i<s.size();i++)
            if(s[i]=='a') cnta++;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
                cnta--;
            
            ans=min(ans,cnta+cntb);
            if(s[i]=='b')
            cntb++;
            
        }
        return ans;
    }
};