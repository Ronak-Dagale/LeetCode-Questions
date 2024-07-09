class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=0;
        int n=customers.size();
        
        int ex=0;
        for(int i=0;i<n;i++)
        {
            if(ex<customers[i][0])
                ex=customers[i][0];
            
             ex+=customers[i][1];
             ans+=(ex-customers[i][0]);
        }
        return ans/(double)n;
    }
};