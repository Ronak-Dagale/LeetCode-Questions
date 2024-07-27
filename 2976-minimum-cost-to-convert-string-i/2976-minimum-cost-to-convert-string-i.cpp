class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
       vector<vector<long long>>cnt(26,vector<long long>(26,LLONG_MAX));
        
        for(int i=0;i<26;i++)
            cnt[i][i]=0;
        
        for(int i=0;i<original.size();i++)
        {
  cnt[original[i]-'a'][changed[i]-'a']=min(cnt[original[i]-'a'][changed[i]-'a'],(long long)cost[i]);
        }
        
        for(int k=0;k<26;k++)
        {
            for(int i=0;i<26;i++)
            {
                for(int j=0;j<26;j++)
                {
                    if(cnt[i][k]!=LLONG_MAX && cnt[k][j]!=LLONG_MAX)
                    cnt[i][j]=min(cnt[i][j],cnt[i][k]+cnt[k][j]);
                }
            }
        }
        long long ans=0;
        for(int i=0;i<source.size();i++)
        {
            if(source[i]==target[i])
                continue;
            else
            {
                int v1=source[i]-'a';
                int v2=target[i]-'a';
                
                if(cnt[v1][v2]==LLONG_MAX)
                    return -1;
                else
                {
                    if(ans>LLONG_MAX-cnt[v1][v2]) return -1;
                  ans+=cnt[v1][v2];  
                }
            }
        }
        return ans;
        
    }
};