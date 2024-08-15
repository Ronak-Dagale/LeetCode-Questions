class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                cnt1++;
            else if(bills[i]==10)
            {
                cnt2++;
                
                if(cnt1==0)
                    return 0;
                
                cnt1--;
            }
            else
            {
                if(cnt1==0)
                    return 0;
                else if(cnt2>=1)
                {
                    cnt2--;
                    cnt1--;
                }
                else if(cnt1>=3)
                {
                  cnt1=cnt1-3;  
                }
                else
                    return 0;
            }
        }
        return 1;
    }
};