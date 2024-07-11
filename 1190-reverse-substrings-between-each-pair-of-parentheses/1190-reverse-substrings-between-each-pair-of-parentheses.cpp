class Solution {
public:
    string solve(string &s,int &i)
    {
        string ans;
    
        while(i<s.size())
        {
            if(s[i]=='(')
            {
                i++;
                string st=solve(s,i);
                ans+=st;
            }
            else if(s[i]==')')
            {
                i++;
                reverse(ans.begin(),ans.end());
                return ans;
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
    string reverseParentheses(string s) {
        int i=0;
       return solve(s,i); 
    }
};