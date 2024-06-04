class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>fre(26,0);
        vector<int>fre1(26,0);
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                fre[s[i]-'A']++;
            else
                fre1[s[i]-'a']++;
        }
        
        bool take=0;
        int odd=INT_MIN;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(fre[i]%2==0)
                ans+=fre[i];
            else
            {
                take=1;
               ans+=fre[i]-1;
            }
        }
        
        for(int i=0;i<26;i++)
        {
            if(fre1[i]%2==0)
                ans+=fre1[i];
            else
            {
                take=1;
                 ans+=fre1[i]-1;
            }
        }
        if(take) ans++;
        return ans;
    }
};