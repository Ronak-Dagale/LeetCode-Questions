class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        
        for(int i=0;i<word1.size();i++)
        {
            char ch=word1[i];
            f1[ch-'a']++;
        }
          
        
         for(int i=0;i<word2.size();i++)
        {
            char ch=word2[i];
            f2[ch-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
          if((f1[i]==0 && f2[i]!=0) || (f1[i]!=0 && f2[i]==0)) return 0;
        }
        
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i]) return 0;
        }
        return 1;
        
    }
};