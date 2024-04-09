class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int ans=0;
        for(int i=0;i<tickets.length;i++)
        {
            if(k<i)ans=ans+Math.min(tickets[k]-1,tickets[i]);
            else ans=ans+Math.min(tickets[k],tickets[i]);
        }
        return ans;
    }
}