class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.size();i++) {
            if(i>k)ans=ans+min(tickets[k]-1,tickets[i]);
            else ans=ans+min(tickets[k],tickets[i]);
        }
        return ans;
    }
};