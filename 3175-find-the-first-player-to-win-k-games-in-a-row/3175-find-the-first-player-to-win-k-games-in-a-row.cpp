class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int c1=skills[0];
        int cnt=0;
        int id=0;
        
        for(int i=1;i<skills.size();i++)
        {
            if(c1<skills[i])
            {
                c1=skills[i];
                cnt=0;
                id=i;
            }
            cnt++;
            if(cnt==k) return id;
        }
        return id;
    }
};