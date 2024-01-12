class Solution {
public:
    bool halvesAreAlike(string s) {
        int ans=0;
        int n=s.size();
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
           {
             if(i>=(n/2)) ans--;
             else ans++;
           }
       }
       return (ans==0);
    }
};