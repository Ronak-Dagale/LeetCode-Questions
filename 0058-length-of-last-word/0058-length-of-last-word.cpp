class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int n=s.size()-1;
        
        while(n>=0)
        {
            while(n>=0 && s[n--]==' ');
            n++;
            
            while(n>=0 && s[n--]!=' ')
            {
                ans++;
            }
                break;
        }
        return ans;
    }
};