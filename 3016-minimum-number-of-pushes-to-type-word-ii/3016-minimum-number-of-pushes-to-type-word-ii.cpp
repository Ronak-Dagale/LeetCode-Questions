class Solution {
public:
    int minimumPushes(string word) {
       vector<int>v(26,0);
        
        for(int i=0;i<word.size();i++)
        v[word[i]-'a']++;
        
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        
        for(int i=0;i<26;i++)
        {
            if(i<=7)
            ans+=(v[i]);  
            else if(i<=15)
            ans+=(v[i]*2);
            else if(i<=23)
            ans+=(v[i]*3);
            else
            ans+=(v[i]*4);
        }
        return ans;
    }
};