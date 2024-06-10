class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans=0;
        sort(meetings.begin(),meetings.end());
        int end=0;
        for(int i=0;i<meetings.size();i++)
        {
            if(meetings[i][0]>end)
            ans+=(meetings[i][0]-end-1);
            end=max(end,meetings[i][1]);
        }
        if(end!=days)
        ans+=(days-end);
        return ans;
    }
};