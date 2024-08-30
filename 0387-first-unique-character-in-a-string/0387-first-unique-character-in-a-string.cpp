class Solution {
public:                      
    int firstUniqChar(string s) {
        vector<vector<int>>mp(26,vector<int>(2,0));
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]-'a'][0]++;
            mp[s[i]-'a'][1]=i;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]-'a'][0]==1) return mp[s[i]-'a'][1];
        }
        return -1;
    }
};
