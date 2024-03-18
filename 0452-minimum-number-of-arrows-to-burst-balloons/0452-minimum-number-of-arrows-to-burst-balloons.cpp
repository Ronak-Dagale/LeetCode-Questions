class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int e=points[0][1];
        
        int ans=1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]>e)
            {
                ans++;
                e=points[i][1];
            }
            else
            {
                e=min(e,points[i][1]);
            }
        }
        return ans;
    }
};