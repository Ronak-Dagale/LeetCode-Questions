class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;

        for(int i=0;i<matches.size();i++)
        {
            int w=matches[i][0];
            int l=matches[i][1];

            mp[l]++;
            if(mp[w]==0)
            mp[w]=0;  
        }
        vector<int>v1,v2;
        for(auto v:mp)
        {
            if(v.second==0)
             v1.push_back(v.first);
             else if(v.second==1)
               v2.push_back(v.first);
        }
        return {v1,v2};
    }
};