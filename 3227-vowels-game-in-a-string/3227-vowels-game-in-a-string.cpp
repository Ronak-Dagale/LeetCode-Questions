class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                return 1;
        }
        if(cnt==0) return 0;
        return 1;
    }
};