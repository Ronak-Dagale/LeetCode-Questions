class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>cnt1(26,0);
        vector<int>cnt2(26,0);
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' && word[i]<='z')
                cnt2[word[i]-'a']=i+1;
            else
            {
                if(cnt1[word[i]-'A']==0)
                    cnt1[word[i]-'A']=i+1;
            }
        }
        
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(cnt2[i]<cnt1[i] && cnt2[i]!=0 && cnt1[i]!=0) {
                ans++;
            }
        }
        return ans;
    }
};