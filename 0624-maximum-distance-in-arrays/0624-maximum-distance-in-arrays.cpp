class Solution {
public:
    
    int maxDistance(vector<vector<int>>& arrays) {
      int ans=INT_MIN;
        int s=arrays[0][0],e=arrays[0].back();
        
        for(int i=1;i<arrays.size();i++)
        {
            ans=max(ans,abs(s-arrays[i].back()));
            ans=max(ans,abs(e-arrays[i][0]));
            
            s=min(s,arrays[i][0]);
            e=max(e,arrays[i].back());
        }
        return ans;
    }
};