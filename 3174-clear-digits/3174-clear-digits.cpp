class Solution {
public:
    string clearDigits(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                for(int j=i;j>=0;j--)
                {
                    if(s[j]>='a' && s[j]<='z')
                    {
                        s[j]='*';
                        break;
                    }
                }
            }
        }
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                ans.push_back(s[i]);
        }
        return ans;
    }
};