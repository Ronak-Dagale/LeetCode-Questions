class Solution {
public:
    int minimumChairs(string s) {
        int ans=INT_MIN;
        int temp=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E')
                temp++;
            else
                temp--;
            
            ans=max(ans,temp);
            
        }
        
        return ans;
    }
};