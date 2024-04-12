class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);
        int maxi=0;
        
        for(int i=0;i<height.size();i++)
        {
            left[i]=maxi;
            maxi=max(maxi,height[i]);
        }
        maxi=0;
        for(int i=n-1;i>=0;i--)
        {
            right[i]=maxi;
            maxi=max(maxi,height[i]);
        }
        
        int ans=0;
        
        for(int i=1;i<n-1;i++)
        {
            int chk=min(left[i],right[i]);
            if(chk-height[i]>=0)
            ans=ans+(chk-height[i]);
        }
        return ans;
    }
};