class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>mp1(n+1,0);
        vector<int>mp2(n+1,0);
        
        for(int i=0;i<trust.size();i++)
        {
           int a=trust[i][0];
            int b=trust[i][1];
            
            mp1[a]=1;
            mp2[b]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp1[i]==0 && mp2[i]==n-1)
                return i;
        }
        return -1;
    }
};