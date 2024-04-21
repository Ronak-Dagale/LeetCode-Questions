class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>cnt1(26,0);
        vector<int>cnt2(26,0);
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' && word[i]<='Z')
                cnt1[word[i]-'A']++;
             else
                 cnt2[word[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(cnt1[i]>0 && cnt2[i]>0)
                ans++;
        }
        return ans;
    }
};