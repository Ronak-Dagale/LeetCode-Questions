class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n=possible.size();
        vector<int>v(n,0);
        
        int sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(possible[i])
                sum++;
            else 
                sum--;
            
            v[i]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(possible[i])sum++;
            else sum--;
            
            if(i+1<n && sum>v[i+1])
                return i+1;
        }
        return -1;
    }
};